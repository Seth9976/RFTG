// 函数名称: sub_46b1d0
// 虚拟地址: 0x46b1d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_46b1d0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: *(arg1 + 0x99) = 0
    *(arg1 + 0x99) = 0
    __builtin_memcpy(arg1 + 0x2c, arg1 + 0xc, 0x20)
    *(arg1 + 0x58) = *arg2
    *(arg1 + 0x5c) = arg2[1]
    *(arg1 + 0x60) = arg2[2]
    *(arg1 + 0x78) = fconvert.s(float.t(0))
    *(arg1 + 0x50) = 0xffffffff
    *(arg1 + 0x98) = 0
    *(arg1 + 0x9c) = 0
    
    if (*(arg1 + 0x5c) == 1)
        *(arg1 + 0x70) = 1
}
