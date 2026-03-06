// 函数名称: sub_6668b0
// 虚拟地址: 0x6668b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_6668b0(int32_t arg1, void* arg2 @ esi, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* result = nullptr
    *(arg2 + 0x78) = arg1
    *(arg2 + 0x7c) = 0
    int32_t i
    
    do
        if (*(arg2 + 0x7c) == 0 && arg3 u> 0)
            if (arg3 u> 0xffffffff)
                *(arg2 + 0x7c) = 0xffffffff
                arg3 += 1
            else
                *(arg2 + 0x7c) = arg3
                arg3 = 0
        
        int32_t edx_1 = *(arg2 + 0xb0)
        *(arg2 + 0x88) = *(arg2 + 0xb4)
        *(arg2 + 0x84) = edx_1
        i = sub_6754d0(arg2 + 0x78, 0)
        void* edi_2 = *(arg2 + 0xb4) - *(arg2 + 0x88)
        
        if ((i == 0 || i == 1) && edi_2 s> 0)
            if (arg4 != 0 && arg5 u> result)
                void* eax_5 = arg5 - result
                
                if (edi_2 u< eax_5)
                    eax_5 = edi_2
                
                sub_5ab990(result + arg4, *(arg2 + 0xb0), eax_5)
            
            result += edi_2
    while (i == 0)
    
    *(arg2 + 0x7c) = 0
    sub_675210(arg2 + 0x78)
    
    if (i == 1)
        return result
    
    char* eax_9 = *(arg2 + 0x90)
    
    if (eax_9 == 0)
        if (i != 0xfffffffb)
            if (i == 0xfffffffd)
                sub_664270(arg2, "Data error in compressed datastream")
                return 0
            
            sub_664270(arg2, "Incomplete compressed datastream")
            return 0
        
        eax_9 = "Buffer error in compressed datastream"
    
    sub_664270(arg2, eax_9)
    return 0
}
