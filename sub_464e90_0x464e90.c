// 函数名称: sub_464e90
// 虚拟地址: 0x464e90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_464e90(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t* ebx = &esi[2]
    int32_t edi
    int32_t var_20 = edi
    
    if (ebx == arg2)
        return 
    
    int32_t* var_c_1 = &ebx[-2]
    
    do
        int32_t edx_1 = ebx[1]
        int32_t* edi_2 = ebx
        int32_t var_14 = *ebx
        
        if (arg3(&var_14, esi) == 0)
            int32_t* esi_1 = var_c_1
            
            if (arg3(&var_14, esi_1).b != 0)
                int32_t eax
                
                do
                    *edi_2 = *esi_1
                    edi_2[1] = esi_1[1]
                    edi_2 = esi_1
                    esi_1 -= 8
                    eax = arg3(&var_14, esi_1)
                while (eax.b != 0)
            
            esi = arg1
            *edi_2 = var_14
            edi_2[1] = edx_1
        else
            int32_t* eax_3 = ebx
            
            if (esi != ebx)
                do
                    int32_t ecx_2 = eax_3[-2]
                    eax_3 -= 8
                    eax_3[2] = ecx_2
                    eax_3[3] = eax_3[1]
                while (eax_3 != esi)
            
            *esi = var_14
            esi[1] = edx_1
        
        var_c_1 = &var_c_1[2]
        ebx = &ebx[2]
    while (ebx != arg2)
}
