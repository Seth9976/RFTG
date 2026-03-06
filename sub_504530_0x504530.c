// 函数名称: sub_504530
// 虚拟地址: 0x504530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_504530(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    int32_t* edi = arg3
    char* eax = *edi
    char* const ebx = &data_83f3d3
    
    if (eax != 0)
        ebx = eax
    
    if (edi[4].b == 0)
        eax, arg3 = sub_554c30(arg1)
    else if (arg1[1] == 1)
        int32_t* var_18_1 = arg1
        eax, arg3 = sub_554ac0(eax, &data_89215c, arg3)
        arg1[1] = 3
    
    int32_t* var_18_2 = arg1
    int32_t* var_18_3 = arg1
    char ecx
    char* edx_1
    ecx, edx_1 = sub_554ac0(sub_554ac0(eax, &data_892164, arg3), ebx, &data_5a90cf)
    arg1[2] += 1
    arg1[1] = 1
    uint32_t eax_2 = edi[2]
    var_8.b = 0
    
    if (eax_2 == 0)
        char* eax_3 = edi[1]
        
        if (eax_3 != 0 && *eax_3 != 0)
            char* var_18_5 = eax_3
            ecx, edx_1 = sub_554d30(arg1, edx_1)
    else
        ecx, edx_1 = sub_5045f0(eax_2, arg1)
        
        if (*(edi + 0x11) == 0)
            var_8.b = 1
    
    char* const edi_1 = *edi
    
    if (edi_1 == 0)
        edi_1 = &data_83f3d3
    
    int32_t* var_18_6 = var_8
    char* const var_1c_2 = edi_1
    return sub_554cc0(arg1, edx_1, ecx)
}
