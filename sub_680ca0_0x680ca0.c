// 函数名称: sub_680ca0
// 虚拟地址: 0x680ca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_680ca0(void* arg1, void* arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* result = arg4
    int32_t* ebx = *result
    arg4 = nullptr
    
    if (*(arg1 + 0x138) s> 0)
        int32_t* eax_1 = arg3 - ebx
        int32_t* var_8_1 = eax_1
        
        while (true)
            char* ecx_2 = *(eax_1 + ebx)
            uint32_t edx_1 = zx.d(*ecx_2)
            char* eax_2 = *ebx
            *eax_2 = edx_1.b
            void* ecx_3 = &ecx_2[1]
            eax_2[1] = ((edx_1 * 3 + zx.d(ecx_2[1]) + 2) s>> 2).b
            int32_t esi_2 = *(arg2 + 0x28)
            void* eax_3 = &eax_2[2]
            int32_t i_1 = esi_2 - 2
            
            if (esi_2 != 2)
                int32_t i
                
                do
                    uint32_t edi_1 = zx.d(*ecx_3) * 3
                    uint32_t edx_7 = zx.d(*(ecx_3 - 1))
                    ecx_3 += 1
                    *eax_3 = ((edx_7 + edi_1 + 1) s>> 2).b
                    *(eax_3 + 1) = ((zx.d(*ecx_3) + edi_1 + 2) s>> 2).b
                    eax_3 += 2
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            uint32_t edx_13 = zx.d(*ecx_3)
            *eax_3 = ((zx.d(*(ecx_3 - 1)) + edx_13 * 3 + 1) s>> 2).b
            *(eax_3 + 1) = edx_13.b
            result = arg4 + 1
            ebx = &ebx[1]
            arg4 = result
            
            if (result s>= *(arg1 + 0x138))
                break
            
            eax_1 = var_8_1
    
    return result
}
