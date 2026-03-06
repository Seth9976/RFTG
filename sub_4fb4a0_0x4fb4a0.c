// 函数名称: sub_4fb4a0
// 虚拟地址: 0x4fb4a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4fb4a0(void* arg1, int32_t* arg2 @ esi)
{
    // 第一条实际指令: arg2[0x64] = *(arg1 + 0xb4)
    arg2[0x64] = *(arg1 + 0xb4)
    arg2[0x65] = *(arg1 + 0xb8)
    arg2[0x67] = *(arg1 + 0xbc)
    arg2[0x69] = 0xb8
    arg2[0x68] = 0xff787260
    int32_t edx_1 = *(arg1 + 0xd4)
    arg2[0x6a] = edx_1
    arg2[0x6d] = *(arg1 + 0xc4)
    int32_t* result = sub_4c4590(sub_4f9540(arg1, edx_1, arg2))
    
    if (arg2[0x57].b == 0)
        char* eax_1 = arg2[0x58]
        arg2[0x5b] = 0
        
        if (eax_1 == 0 || *eax_1 == 0)
            arg2[0x59] = 0
            arg2[0x57].b = 1
            return 0
        
        result = *(sub_4c4060(&arg2[0x58]) + 8)
        arg2[0x59] = result
    
    arg2[0x57].b = 1
    return result
}
