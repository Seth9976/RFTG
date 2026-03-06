// 函数名称: sub_683520
// 虚拟地址: 0x683520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_683520(void* arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x1cc)
    void* esi = *(arg1 + 0x1cc)
    void* var_18 = esi
    int32_t var_8
    
    if (*(arg1 + 0x58) != 1)
        var_8 = 0
        *(esi + 0x1c) = 0
    else
        var_8 = 0x1fe
        *(esi + 0x1c) = 1
    
    int32_t result_3 = 0
    *(esi + 0x18) = (*(*(arg1 + 4) + 8))(arg1, 1, var_8 + 0x100, *(arg1 + 0x78))
    int32_t result = *(esi + 0x14)
    int32_t result_1 = 0
    
    if (*(arg1 + 0x78) s> 0)
        while (true)
            int32_t ecx_1 = *(esi + (result_3 << 2) + 0x20)
            int32_t result_2 = divs.dp.d(sx.q(result), ecx_1)
            
            if (var_8 != 0)
                int32_t edx_5 = *(esi + 0x18)
                *(edx_5 + (result_3 << 2)) += 0xff
            
            char* edi = *(*(esi + 0x18) + (result_3 << 2))
            int32_t ebx_1 = 0
            char* var_1c_1 = edi
            char* i = nullptr
            int32_t esi_2 = divs.dp.d(sx.q(ecx_1 + 0xfe), ecx_1 * 2 - 2)
            
            do
                if (i s> esi_2)
                    int32_t edi_1 = ebx_1 * 0x1fe + ecx_1 + 0xfe
                    
                    do
                        edi_1 += 0x1fe
                        ebx_1 += 1
                        esi_2 = divs.dp.d(sx.q(edi_1), ecx_1 * 2 - 2)
                    while (i s> esi_2)
                    
                    edi = var_1c_1
                
                int32_t eax_8
                eax_8.b = result_2.b
                eax_8.w = muls.dp.b(eax_8.b, ebx_1.b)
                *(i + edi) = eax_8.b
                i = &i[1]
            while (i s<= 0xff)
            
            if (var_8 != 0)
                int32_t i_1 = 1
                char* ecx_2 = &edi[0xffffffff]
                
                do
                    *ecx_2 = *edi
                    edi[i_1 + 0xff] = edi[0xff]
                    i_1 += 1
                    ecx_2 -= 1
                while (i_1 s<= 0xff)
            
            result = result_1 + 1
            result_1 = result
            
            if (result s>= *(arg1 + 0x78))
                break
            
            result = result_2
            result_3 = result_1
            esi = var_18
    
    return result
}
