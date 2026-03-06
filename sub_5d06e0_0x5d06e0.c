// 函数名称: sub_5d06e0
// 虚拟地址: 0x5d06e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5d06e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t* eax_1 = *ebx[0xa]
    int32_t var_114
    void* i
    int32_t edx
    i, edx = (*(*eax_1 + 0x24))(eax_1, 0x110, &var_114)
    
    if (i == 0x8007001e || i == 0x8007000c)
        int32_t* eax_3 = *ebx[0xa]
        (*(*eax_3 + 0x1c))(eax_3)
        int32_t* eax_5 = *ebx[0xa]
        i, edx = (*(*eax_5 + 0x24))(eax_5, 0x110, &var_114)
    
    if (i != 0)
        void* eax_6 = ebx[0xa]
        *(eax_6 + 0xc4d) = 1
        *(ebx[0xa] + 0xc4c) = 1
        return eax_6
    
    void* esi = ebx[0xa]
    arg1 = nullptr
    
    if (*(esi + 0xc44) s> 0)
        int32_t edi_1 = 0
        
        do
            int32_t eax_7 = *(edi_1 + esi + 0x48)
            
            if (eax_7 == 0)
                int32_t ecx_7
                ecx_7.b = *(edi_1 + esi + 0x4c)
                int32_t eax_8
                eax_8.b = *(&var_114 + *(edi_1 + esi + 0x44)) != 0
                edx = sub_5d0000(eax_8.b, edx, ecx_7.b, ebx)
            else
                int16_t var_110
                int16_t var_10c
                int16_t var_108
                int16_t var_104
                int16_t var_100
                int16_t var_fc
                int16_t var_f8
                
                if (eax_7 == 1)
                    switch (*(edi_1 + esi + 0x44))
                        case 0
                            edx = sub_5cffa0(var_114.w, edx, *(edi_1 + esi + 0x4c), ebx)
                        case 4
                            edx = sub_5cffa0(var_110, edx, *(edi_1 + esi + 0x4c), ebx)
                        case 8
                            edx = sub_5cffa0(var_10c, edx, *(edi_1 + esi + 0x4c), ebx)
                        case 0xc
                            edx = sub_5cffa0(var_108, edx, *(edi_1 + esi + 0x4c), ebx)
                        case 0x10
                            edx = sub_5cffa0(var_104, edx, *(edi_1 + esi + 0x4c), ebx)
                        case 0x14
                            edx = sub_5cffa0(var_100, edx, *(edi_1 + esi + 0x4c), ebx)
                        case 0x18
                            edx = sub_5cffa0(var_fc, edx, *(edi_1 + esi + 0x4c), ebx)
                        case 0x1c
                            edx = sub_5cffa0(var_f8, edx, *(edi_1 + esi + 0x4c), ebx)
                else if (eax_7 == 2)
                    int32_t var_174[0x13]
                    char eax_11
                    int32_t edx_5
                    eax_11, edx_5 = sub_5cff20(var_174[*(edi_1 + esi + 0x44)])
                    edx = sub_5cffd0(eax_11, edx_5, *(edi_1 + esi + 0x4c), ebx)
            
            esi = ebx[0xa]
            i = arg1 + 1
            edi_1 += 0xc
            arg1 = i
        while (i s< *(esi + 0xc44))
    
    return i
}
