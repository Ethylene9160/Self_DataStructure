# KMP算法

**`pat` 表示模式串，长度为 `M`，`txt` 表示文本串，长度为 `N`。KMP 算法是在 `txt` 中查找子串 `pat`，如果存在，返回这个子串的起始索引，否则返回 -1**。

传统算法:逐一从某个数开始比对。

```java
private int search(String pat, String txt) {
    int M = pat.length;
    int N = txt.length;
    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++) {
            if (pat[j] != txt[i+j])
                break;
        }
        // pat 全都匹配了
        if (j == M) return i;
    }
    // txt 中不存在 pat 子串
    return -1;
}
```

* 构建next数组：next[i]用于保存pat[0]-pat[i]之间，前k个字符与后k个字符相同的最大k。

例如：

```bash
pat = [a,b,a,b,a,a,a,b,a]
nxt = []
```





