// 函数名称: sub_5cb7e0
// 虚拟地址: 0x5cb7e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5cb7e0()
{
    // 第一条实际指令: if (data_bed820 == 0)
    if (data_bed820 == 0)
        return 
    
    sub_5dac00()
    sub_5d5b00()
    sub_5c68d0(0x4000)
    sub_5ca200()
    void* ecx_1 = data_bed820
    
    for (int32_t* i = *(ecx_1 + 0xf0); i != 0; i = *(ecx_1 + 0xf0))
        sub_5cb660(i)
        ecx_1 = data_bed820
    
    (*(ecx_1 + 8))(ecx_1)
    void* eax_2 = data_bed820
    int32_t i_3 = 0
    
    if (*(eax_2 + 0xe8) s> 0)
        int32_t var_8_1 = 0
        int32_t i_1
        
        do
            void* esi_2 = *(eax_2 + 0xec) + var_8_1
            int32_t j_1 = *(esi_2 + 8)
            
            if (j_1 != 0)
                int32_t edi_3 = j_1 * 0x14
                int32_t j
                
                do
                    int32_t edx_1 = *(edi_3 + *(esi_2 + 0xc) - 4)
                    edi_3 -= 0x14
                    int32_t var_1c_2 = edx_1
                    sub_5d0af0()
                    j = j_1
                    j_1 -= 1
                    *(edi_3 + *(esi_2 + 0xc) + 0x10) = 0
                while (j != 1)
            
            int32_t var_1c_3 = *(esi_2 + 0xc)
            sub_5d0af0()
            int32_t var_20_1 = *(esi_2 + 0x20)
            *(esi_2 + 0xc) = 0
            sub_5d0af0()
            int32_t var_24_1 = *(esi_2 + 0x40)
            *(esi_2 + 0x20) = 0
            sub_5d0af0()
            eax_2 = data_bed820
            var_8_1 += 0x44
            i_1 = i_3 + 1
            *(esi_2 + 0x40) = 0
            i_3 = i_1
        while (i_1 s< *(eax_2 + 0xe8))
    
    if (*(eax_2 + 0xec) != 0)
        int32_t i_2 = 0
        
        if (*(eax_2 + 0xe8) s> 0)
            int32_t ebx_1 = 0
            
            do
                int32_t var_1c_4 = *(*(eax_2 + 0xec) + ebx_1)
                sub_5d0af0()
                eax_2 = data_bed820
                i_2 += 1
                ebx_1 += 0x44
            while (i_2 s< *(eax_2 + 0xe8))
        
        int32_t var_1c_5 = *(eax_2 + 0xec)
        sub_5d0af0()
        eax_2 = data_bed820
        *(eax_2 + 0xec) = 0
        *(eax_2 + 0xe8) = 0
    
    int32_t ecx_6 = *(eax_2 + 0xfc)
    sub_5d0af0()
    void* eax_6 = data_bed820
    int32_t edx_4 = *(eax_6 + 0x27c)
    *(eax_6 + 0xfc) = 0
    edx_4(eax_6, ecx_6)
    data_bed820 = 0
}
