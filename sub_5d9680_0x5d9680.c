// 函数名称: sub_5d9680
// 虚拟地址: 0x5d9680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d9680(int32_t* arg1, float arg2, float arg3)
{
    // 第一条实际指令: if (arg1 == 0 || *arg1 != 0xbf7fc4)
    if (arg1 == 0 || *arg1 != 0xbf7fc4)
        sub_5cce60("Invalid renderer")
        return 0xffffffff
    
    arg1[0x45] = fconvert.s(fconvert.t(arg2))
    arg1[0x46] = fconvert.s(fconvert.t(arg3))
    return 0
}
