// 函数名称: sub_5bf3e0
// 虚拟地址: 0x5bf3e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bf3e0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        return 0
    
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(zx.d(arg2[1].w))
    return sub_5c21e0(arg1, *arg2, eax_2, edx)
}
