// 函数名称: sub_4652d0
// 虚拟地址: 0x4652d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4652d0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t* ebx = &esi[5]
    
    if (ebx == arg2)
        return 
    
    int32_t* var_8_1 = &ebx[-5]
    int32_t edi
    int32_t var_28_1 = edi
    
    do
        int32_t eax_2 = ebx[2]
        int32_t edx_1 = ebx[1]
        int32_t var_1c = *ebx
        int32_t ecx_2 = ebx[3]
        int32_t edx_2 = ebx[4]
        int32_t* edi_2 = ebx
        
        if (arg3(&var_1c, esi) == 0)
            int32_t* esi_1 = var_8_1
            
            if (arg3(&var_1c, esi_1) != 0)
                char i
                
                do
                    *edi_2 = *esi_1
                    edi_2[1] = esi_1[1]
                    edi_2[2] = esi_1[2]
                    edi_2[3] = esi_1[3]
                    edi_2[4] = esi_1[4]
                    edi_2 = esi_1
                    esi_1 -= 0x14
                    i = arg3(&var_1c, esi_1)
                while (i != 0)
            
            esi = arg1
            *edi_2 = var_1c
            edi_2[1] = edx_1
            edi_2[2] = eax_2
            edi_2[3] = ecx_2
            edi_2[4] = edx_2
        else
            int32_t* eax_4 = ebx
            
            if (esi != ebx)
                do
                    int32_t ecx_3 = eax_4[-5]
                    eax_4 -= 0x14
                    eax_4[5] = ecx_3
                    eax_4[6] = eax_4[1]
                    eax_4[7] = eax_4[2]
                    eax_4[8] = eax_4[3]
                    eax_4[9] = eax_4[4]
                while (eax_4 != esi)
            
            *esi = var_1c
            esi[1] = edx_1
            esi[2] = eax_2
            esi[3] = ecx_2
            esi[4] = edx_2
        
        var_8_1 = &var_8_1[5]
        ebx = &ebx[5]
    while (ebx != arg2)
}
