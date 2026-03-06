// 函数名称: sub_4eba60
// 虚拟地址: 0x4eba60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_4eba60(int32_t* arg1 @ esi, void* arg2 @ edi, long double arg3 @ st0, long double arg4 @ st1)
{
    // 第一条实际指令: sub_4eb880(arg1, *(arg2 + 0x30))
    sub_4eb880(arg1, *(arg2 + 0x30))
    sub_4eb7e0(arg1, *(arg2 + 0x30))
    return fconvert.t(fconvert.s(arg4 - fconvert.t(fconvert.s(arg3))))
}
