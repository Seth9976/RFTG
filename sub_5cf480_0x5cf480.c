// 函数名称: sub_5cf480
// 虚拟地址: 0x5cf480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_5cf480(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg2
    void* i_2 = *arg1
    void* i = i_2
    void* i_1 = nullptr
    
    for (; i != 0; i = *(i + 0x470))
        if (*(i + 0x468) != 0 && *(i + 0x46c) == ebx.b)
            if (i == i_2)
                *arg1 = *(i + 0x470)
            else if (i_1 != 0)
                *(i_1 + 0x470) = *(i + 0x470)
            
            *(i + 0x470) = data_bedd20
            data_bedd20 = i
            return i
        
        i_1 = i
    
    int32_t var_30 = 0x474
    void* eax = sub_5d0ac0()
    void* esi_1 = eax
    
    if (esi_1 != 0)
        int32_t var_30_1 = 0x474
        int32_t var_34_1 = 0
        void* var_38_1 = esi_1
        sub_5cd100()
        int32_t var_3c_1 = zx.d(ebx.b) + 1
        char var_24[0x20]
        sub_5ce6a0(&var_24, 0x20, "XInput Controller #%u")
        int32_t eax_1 = sub_5cd390(&var_24)
        *(esi_1 + 0x45c) = eax_1
        
        if (eax_1 == 0)
            void* var_30_2 = esi_1
            return sub_5d0af0()
        
        int32_t edx_3 = data_bedd20
        eax = data_8b9780 + 1
        *(esi_1 + 0x468) = 1
        *(esi_1 + 0x46c) = ebx.b
        *(esi_1 + 0x460) = 1
        data_8b9780 = eax
        *(esi_1 + 0x464) = eax
        *(esi_1 + 0x470) = edx_3
        data_bedd20 = esi_1
        data_bedd2c = 1
    
    return eax
}
