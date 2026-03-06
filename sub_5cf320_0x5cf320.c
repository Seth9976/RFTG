// 函数名称: sub_5cf320
// 虚拟地址: 0x5cf320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_5cf320(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* i_1 = nullptr
    void* i_1 = nullptr
    
    if (sub_5cee90(&arg1[5]) != 0)
        return 1
    
    for (void* i = *arg2; i != 0; i = *(i + 0x470))
        if (sub_5cd130(i + 0x14, &arg1[1], 0x10) == 0)
            if (i == *arg2)
                *arg2 = *(i + 0x470)
            else if (i_1 != 0)
                *(i_1 + 0x470) = *(i + 0x470)
            
            *(i + 0x470) = data_bedd20
            data_bedd20 = i
            return 1
        
        i_1 = i
    
    int32_t var_14 = 0x474
    void* eax_6 = sub_5d0ac0()
    
    if (eax_6 != 0)
        int32_t var_14_1 = 0x474
        int32_t var_18_2 = 0
        void* var_1c_2 = eax_6
        sub_5cd100()
        int32_t var_24_1 = sub_5cd1d0(&arg1[0x8c]) * 2 + 2
        void* var_28_1 = &arg1[0x8c]
        int32_t eax_8 = sub_5dd160("UTF-8", "UTF-16LE")
        *(eax_6 + 0x45c) = eax_8
        
        if (eax_8 != 0)
            int32_t var_14_3 = 0x44c
            int32_t* var_18_3 = arg1
            void* var_1c_3 = eax_6 + 0x10
            sub_5cd110()
            int32_t var_20_2 = 0x10
            int32_t eax_15 = data_8b9780 + 1
            int32_t* var_24_2 = &arg1[5]
            void* var_28_2 = eax_6
            *(eax_6 + 0x46c) = 0xff
            *(eax_6 + 0x460) = 1
            data_8b9780 = eax_15
            *(eax_6 + 0x464) = eax_15
            sub_5cd110()
            *(eax_6 + 0x470) = data_bedd20
            data_bedd20 = eax_6
            data_bedd2c = 1
            return 1
        
        void* var_14_2 = eax_6
        sub_5d0af0()
    
    return 1
}
