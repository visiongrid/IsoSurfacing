https://sugarac.gitbooks.io/high-frequency-interview-questions-and-answers/content/roblox.html


网上海投的职位，去了以后发现是个发展势头很好的游戏公司，在青少年里有很大市场，比较特别的是他家做让玩家自我开发游戏场景的平台，很有意思，据说现在正处于用户井喷阶段。目前员工大概有200多人，在San Mateo downtown。. more info on 1point3acres.com

他家电面外包给了外面一个专门负责面试的公司，面我的人在东岸，和他们公司完全没关系。上来先让介绍自己经验，然后做题。

题目类似find islan，在background是0的matrix里找1的rectangular，返回rectangular的位置和大小，先是一个，follow up是n个。不考虑重叠情况。. from: 1point3acres.com/bbs

之后是两次onsite。

第一次技术面试：

    hiring manager先让介绍自己，问项目经验，再问了很多Java基础知识，arraylist vs linkedlist, graph的三种表示方式等等。然后问了一个system design的思路，typeahead suggestion，没准备，只能瞎编了，还好说对了个Trie，算是过了。

    engineer面，介绍自己，问项目经验，做题+system design。题是求一个一维数组里的所有峰值，峰值的定义是从上升到下降的拐点，也就是斜率从正变负的那个点。开始最简单的情况是没有重复值，然后follow up有重复值怎么办，如果数据很长每次只能load一小段怎么办，怎么处理峰值刚好在边界什么的。follow up只要说思路。做完还有20分钟，小哥说那我们再来个system design吧，题是如何设计一个系统能让用户和developer能相互留言，结构参考设计facebook的messageer。.1point3acres缃�

    engineer面，直接做题，第一题是在unsorted array里找最小的k个数，开始说要排序，用heap解决，follow up是不排序的话怎么优化，quick selection。第二个题是serialize and deserialize binary tree。没时间了只说了几种思路。

过了以后又和我约第二次面试，是和老板们面，分别见了VP和director, 就聊聊天， bahavior问题等。

最后拿到了offer，给的数字一般，再加上催得特别紧，我后面还有很多面试不想放弃，拖了一阵子没法拖就据了。

Q1: 两个ASCII字符串a和b，输出a和b里面中最先在另外一个字符串中出现的字符的位置。比如说"abc", "dcba"那么输出0，因为a在dcba中出现了。"bbaa", "abcd"同样也输出0。如果没有重复字符那么输出-1。

Q2: 实现cd这个功能，给一个字符串表示当前的路径，再给一个字符串表示你要cd到的路径，输出最终路径。这个题目我的做法是parse了原路径，将其转成vector<string>表示当前的路径结构，然后处理cd的时候一开始将最终目录的vector<string> ret初始化成currentDirectory，但是如果要cd到的第一个字符是'/'的话那么说明是从根目录开始cd，这个时候清空ret，然后就按部就班的处理就可以了，比如说碰到..就要pop_back()等等，需要注意的是在cd的路径最后加一个'/'可以方便最后的处理而不用判断最后一个没有被处理的directoryName，因为这个name有可能是..这样的特殊情况。
