
https://leetcode.com/discuss/interview-question/789961/Design-a-cloud-based-simulationvisualization-platform-for-a-self-driving-cars-company

Hello leetcoders,
One design question in interviews especially with Autonomous Driving companies (e.g. Waymo, Uber ATG, etc) could be the following.
Design a simulation platform backed by distributed cloud that renders collected datasets all the way from SDC vehicles to the user browser.
To get a better sense of how a simulation environment looks like you can visit Uber ATG post and Waymo blog post.
As you may know, the challenge of designing a seamless rendering platform for (500-1000) users is the extremely large datasets. In this problem we are dealing with several high-res RGB cameras as well as the data from radar and lidar sensors. The whole dataset may contain over several millions of driving miles.

Here are some specifications:

    In-vehicle data:
        5x 720p streams of RGB cameras. (We may compress)
        1x stream of lidar sensor (raw point cloud)
        5x stream of low-res radar
        GPS readings
        Operator data
        Driving data (gas, streering angle, brake, etc from CAN protocol)
    External data:
        High definition map of the venue. (high level map of traffic signs, roads, facades, etc)
    After each complete route by the vehicle, the data will be uploaded somewhere to enable visualization.
    Traffic: We expect to have maximum of 1000 users working with the system.
    Duration: On average each dataset contains 1 hour of driving. So each visualization task takes ~1hour.
    High durability is a must.
    Realtime and seamless rendering experience is required.
    The visualization environment must process the data and render 3D or 2D objects in the map as defined by the dataset.
    Fast-forward, backward, replay mode is required.
    Bonus features:
        Ability to annotate the dataset and save for later use.
        Ability to save sessions and continue the process at later time.
        Interaction with other services such as (Pedestrian detection, obstacle detection, etc)

Since I did not find a similar design over the internet, I thought I would create this topic to get feedback from the community.
Thanks,

