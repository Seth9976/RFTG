// 函数名称: sub_67d4a0
// 虚拟地址: 0x67d4a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67d4a0(void* arg1)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t result = *(ebx + 0x13c)
    int32_t esi = 0
    void* edi = *(ebx + 0x1a8)
    void* var_14 = edi
    int32_t result_1 = result
    int32_t var_c = 0
    
    if (*(ebx + 0x24) s> 0)
        int32_t* ecx_1 = *(ebx + 0xd8) + 0xc
        int32_t* var_10_1 = ecx_1
        
        while (true)
            result = divs.dp.d(sx.q(ecx_1[6] * *ecx_1), *(ebx + 0x13c))
            int32_t* edi_1 = *(*(edi + 0x3c) + (esi << 2))
            
            if (result s> 0)
                int32_t* ebx_1 = &edi_1[(result_1 + 2) * result]
                int32_t* edx_8 = edi_1 - result * 4
                int32_t* esi_1 = &edi_1[(result_1 + 1) * result]
                int32_t* ecx_6 = *(*(edi + 0x38) + (esi << 2)) - edi_1
                int32_t var_8_2 = result
                int32_t i
                
                do
                    *(ecx_6 + edx_8) = *(ecx_6 + esi_1)
                    *edx_8 = *esi_1
                    *(ecx_6 + ebx_1) = *(ecx_6 + edi_1)
                    result = *edi_1
                    *ebx_1 = result
                    esi_1 = &esi_1[1]
                    edx_8 = &edx_8[1]
                    edi_1 = &edi_1[1]
                    ebx_1 = &ebx_1[1]
                    i = var_8_2
                    var_8_2 -= 1
                while (i != 1)
                esi = var_c
                ebx = arg1
                ecx_1 = var_10_1
            
            esi += 1
            ecx_1 = &ecx_1[0x15]
            var_c = esi
            var_10_1 = ecx_1
            
            if (esi s>= *(ebx + 0x24))
                break
            
            edi = var_14
    
    return result
}
