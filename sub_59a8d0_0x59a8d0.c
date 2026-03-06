// 函数名称: sub_59a8d0
// 虚拟地址: 0x59a8d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_59a8d0(int32_t arg1 @ esi, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* eax = *arg2
    int32_t* eax = *arg2
    int32_t edi_1 = eax[1] * *eax
    int32_t eax_1 = arg2[3]
    void* result = sub_5a881a(edi_1 * arg3)
    
    if (result == 0)
        data_273ac1c = "outofmem"
        return result
    
    void* edx = nullptr
    
    if (arg3 != 3)
        if (edi_1 != 0)
            void* ecx_4 = result + 2
            
            do
                uint32_t eax_9 = zx.d(*(edx + eax_1)) * 4
                *(ecx_4 - 2) = *(eax_9 + arg1)
                *(ecx_4 - 1) = *(arg1 + eax_9 + 1)
                char ebx_5 = *(arg1 + eax_9 + 2)
                eax_9.b = *(arg1 + eax_9 + 3)
                *ecx_4 = ebx_5
                *(ecx_4 + 1) = eax_9.b
                edx += 1
                ecx_4 += 4
            while (edx u< edi_1)
    else if (edi_1 != 0)
        char* ecx_3 = result + 2
        
        do
            uint32_t eax_5 = zx.d(*(edx + eax_1)) * 4
            ecx_3[0xfffffffe] = *(eax_5 + arg1)
            char ebx_2 = *(arg1 + eax_5 + 1)
            eax_5.b = *(arg1 + eax_5 + 2)
            ecx_3[0xffffffff] = ebx_2
            *ecx_3 = eax_5.b
            edx += 1
            ecx_3 = &ecx_3[3]
        while (edx u< edi_1)
    
    __free_base(eax_1)
    arg2[3] = result
    return 1
}
