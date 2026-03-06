// 函数名称: sub_5b665e
// 虚拟地址: 0x5b665e
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5b665e(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax_3 = *arg1
    int32_t* eax_3 = *arg1
    
    if (*eax_3 == 0xe06d7363 && eax_3[4] == 3)
        int32_t ecx_1 = eax_3[5]
        
        if ((ecx_1 == 0x19930520 || ecx_1 == 0x19930521 || ecx_1 == 0x19930522) && eax_3[7] == 0)
            __getptd()[0x83] = 1
            return 1
    
    return 0
}
