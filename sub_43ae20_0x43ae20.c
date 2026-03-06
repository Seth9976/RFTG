// 函数名称: sub_43ae20
// 虚拟地址: 0x43ae20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_43ae20(float arg1 @ eax, char arg2, int32_t arg3, char* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    char* esi = arg4
    int32_t edi_2
    
    if (esi[0x2c098] != 0 || *(esi + 0x2c0b8) != 0)
        int32_t var_18_5 = 0
        sub_4fa4e0(arg3, arg1, arg2)
        
        if (esi[0x2c079] == 0)
            var_8:3.b = 0
        
        if (esi[0x2c079] != 0 || esi[0x2c07a] != 0)
            var_8:3.b = 1
        
        int128_t* eax_13 = sub_4f6e90(arg5, sub_4fc3d0(&data_be1cb8, arg3), &data_83f3d3)
        esi = arg4
        edi_2 = arg5
        *(eax_13 + 0x22) = var_8:3.b
    else
        void* ecx = *(data_27e7a40 + 0x548)
        char* edx = *(ecx + 0xbfa8)
        arg4 = edx
        
        if (sub_41d070() != arg4)
        label_43ae66:
            int32_t var_18_1 = 1
            sub_4fa4e0(arg3, arg1, edx.b)
            int128_t* eax_4 = sub_4f6e90(arg5, sub_4fc3d0(&data_be1cb8, arg3), &data_83f3d3)
            *(eax_4 + 0x22) = 1
            return eax_4
        
        int32_t eax_5 = *(esi + 0x210)
        
        if (eax_5 == 6)
            goto label_43ae66
        
        if (eax_5 == 4)
            char eax_6
            eax_6, ecx, edx = sub_419400(&arg4)
            
            if (eax_6 != 0)
                goto label_43ae66
        
        int32_t var_18_3 = 0
        int32_t eax_8
        int32_t edx_1
        eax_8, edx_1 = sub_4fa4e0(arg3, arg1, edx.b)
        
        if (esi[0x2c079] != 0 || esi[0x2c07a] != 0)
            eax_8 = 1
        else
            eax_8.b = 0
        
        edi_2 = arg5
        int32_t var_18_4 = eax_8
        int32_t var_1c_2 = edi_2
        int32_t edx_2 = sub_4fa450(arg3, edx_1, ecx.b)
        uint32_t ecx_1 = zx.d(esi[0x2c078])
        uint32_t var_20_1 = ecx_1
        int32_t var_24_1 = edi_2
        sub_4fa420(arg3, edx_2, ecx_1.b)
    
    int32_t eax_14 = *(esi + 0x210)
    arg4 = &data_83f3d3
    
    switch (eax_14)
        case 0
            arg4 = &data_848fc4
        case 1
            arg4 = "CANCEL"
        case 2
            arg4 = "PASS"
        case 3
            arg4 = "SCORE"
        case 4
            arg4 = "WAIT"
        case 5
            arg4 = "SEARCH"
    
    if (esi[0x2c098] != 0 || *(esi + 0x2c0b8) != 0)
        arg4 = &data_848fc4
    
    int128_t* eax_16 = sub_4f6e90(edi_2, sub_4fc3d0(&data_be1cb8, arg3), &data_83f3d3)
    *(eax_16 + 0x64) = *eax_16 + 1
    int32_t* eax_20 = sub_4c4590(arg4)
    *(eax_16 + 0x151) = 1
    return eax_20
}
