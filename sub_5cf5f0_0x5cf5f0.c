// 函数名称: sub_5cf5f0
// 虚拟地址: 0x5cf5f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5cf5f0()
{
    // 第一条实际指令: void* i_2 = nullptr
    void* i_2 = nullptr
    
    if (data_bedd2c == 0 && data_bedd30 == 0)
        return 
    
    sub_5d1190(data_bedd38)
    int32_t* eax_2 = data_bedd28
    i_2 = data_bedd20
    int32_t edx_2 = *(*eax_2 + 0x10)
    data_bedd2c = 0
    data_bedd30 = 0
    data_bedd20 = 0
    edx_2(eax_2, 4, sub_5cf320, &i_2, 1)
    int32_t var_88_2 = data_bedd5c
    sub_5d0af0()
    data_bedd5c = 0
    data_bedd60 = 0
    sub_5cf5a0(&i_2)
    uint32_t eax
    int32_t ecx_3
    eax, ecx_3 = sub_5d11c0(data_bedd38)
    
    if (i_2 != 0)
        void* i
        
        do
            int32_t var_40 = 0x606
            
            if (sub_5c7830(0x606, 0xffffffff) == 1)
                int32_t var_38_1 = *(i_2 + 0x464)
                int32_t eax_6 = data_bed760
                int32_t eax_7
                
                if (eax_6 != 0)
                    eax_7 = eax_6(data_3168020, &var_40)
                
                if (eax_6 == 0 || eax_7 != 0)
                    sub_5c76a0(&var_40)
            
            void* i_4 = i_2
            i = *(i_4 + 0x470)
            int32_t var_88_5 = *(i_4 + 0x45c)
            sub_5d0af0()
            void* i_3 = i_2
            sub_5d0af0()
            i_2 = i
        while (i != 0)
    
    if (data_bedd2c == 0)
        return 
    
    void* i_1 = data_bedd20
    int32_t edi_1 = 0
    data_bedd2c = 0
    
    while (i_1 != 0)
        if (*(i_1 + 0x460) != 0)
            int32_t var_78 = 0x605
            eax = sub_5c7830(0x605, 0xffffffff)
            
            if (eax.b == 1)
                int32_t eax_8 = data_bed760
                int32_t var_70_1 = edi_1
                
                if (eax_8 != 0)
                    eax = eax_8(data_3168020, &var_78)
                
                if (eax_8 == 0 || eax != 0)
                    sub_5c76a0(&var_78)
            
            *(i_1 + 0x460) = 0
        
        i_1 = *(i_1 + 0x470)
        edi_1 += 1
}
