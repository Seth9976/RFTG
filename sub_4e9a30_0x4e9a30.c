// 函数名称: sub_4e9a30
// 虚拟地址: 0x4e9a30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4e9a30(int32_t* arg1 @ edi, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* result = arg2
    int32_t* result = arg2
    int32_t esi_2 = arg1[1] * 4
    int32_t esi_3 = esi_2 * 2
    result[1] = esi_3
    int128_t* ebx
    
    if (esi_2 != neg.d(esi_2))
        ebx = sub_4cce80(esi_3)
        sub_5abfc0(ebx, 0, esi_3)
        result = arg2
    else
        ebx = nullptr
    
    int32_t i = 0
    *result = ebx
    result[2] = 1
    
    if (arg1[1] s> 0)
        int32_t ebx_1 = 0
        
        do
            int32_t* esi_4 = *arg2 + (i << 3)
            void* eax_4 = *arg1 + ebx_1
            int32_t ecx_3
            
            if (arg3 == 0)
                ecx_3 = *eax_4
                result = *(eax_4 + 4)
            else if (arg3 == 1)
                ecx_3 = *(eax_4 + 8)
                result = *(eax_4 + 0xc)
            else if (arg3 != 2)
                if (arg3 != 3)
                    sub_4c5870("Halt", &data_83f3d3, "Flanim.cpp", 0x52c, "FlanimCompressGetVec2")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                ecx_3 = *(eax_4 + 0x18)
                result = *(eax_4 + 0x1c)
            else
                ecx_3 = *(eax_4 + 0x10)
                result = *(eax_4 + 0x14)
            
            i += 1
            *esi_4 = ecx_3
            esi_4[1] = result
            ebx_1 += 0x30
        while (i s< arg1[1])
    
    return result
}
