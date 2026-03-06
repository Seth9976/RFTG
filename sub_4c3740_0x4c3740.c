// 函数名称: sub_4c3740
// 虚拟地址: 0x4c3740
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4c3740(int32_t* arg1, float* arg2)
{
    // 第一条实际指令: float* esi = arg1
    float* esi = arg1
    
    if (*(esi + 0x25) == 0)
        return 
    
    __builtin_memset(&esi[0xa], 0, 0x14)
    int32_t var_1c
    void var_10
    char eax_1
    int32_t* ecx_3
    float* edx_2
    eax_1, ecx_3, edx_2 = sub_405230(&var_10, esi, &var_1c, arg2, &var_10)
    
    if (eax_1 != 0)
        int32_t* var_2c_2 = &esi[0xa]
        void* var_30_2 = &var_10
        
        if (sub_4c3530(esi, edx_2, ecx_3) != 0)
            esi[0xb] = var_1c
            int32_t var_18
            esi[0xc] = var_18
            int32_t var_14
            esi[0xd] = var_14
    
    int32_t* var_c_1 = nullptr
    
    while (true)
        if (var_c_1 != 0)
            arg1 = var_c_1[8]
        else
            arg1 = *data_27e7fdc
        
        if (arg1 == 0)
            break
        
        int32_t* edi_1
        
        while (true)
            edi_1 = arg1
            arg1 = arg1[8]
            
            if (edi_1[7].b == 0)
                break
            
            if (arg1 == 0)
                return 
        
        var_c_1 = edi_1
        
        if (sub_4c3430(edi_1) == 0)
            if (sub_4c34b0(edi_1) == 0)
                continue
            else if (esi[0xe] == 1 && esi[0xa] == esi[0x10])
                edi_1[7].b = 1
        else if (esi[0xe] == 1)
            sub_4c36a0(&esi[0xa], esi)
            esi[0x10] = esi[0xa]
            edi_1[7].b = 1
            continue
        
        esi[0x10] = 0
}
