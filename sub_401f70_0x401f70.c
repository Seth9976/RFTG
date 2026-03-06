// 函数名称: sub_401f70
// 虚拟地址: 0x401f70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t**sub_401f70(int32_t* arg1 @ esi)
{
    // 第一条实际指令: char* ecx
    char* ecx
    void* edx = sub_4b7710(ecx)
    int32_t* eax = data_8c8710
    int32_t* ecx_1 = *eax
    int32_t ebx
    ebx.b = 0
    int32_t* var_c = ecx_1
    int32_t var_14
    
    if (eax[1].b != 0)
        var_14 = 3
    else if (arg1[4] == 0x81)
        edx = data_27e7a44
        ecx_1 = *(edx + 0x2c)
        
        if (ecx_1 s< eax[2])
            ebx = 1
            var_14 = 1
        else
            var_14 = 4
    else
        var_14 = 2
    
    int32_t* var_20 = &var_14
    int32_t var_24 = 0xf4245
    sub_4c8dd0(*arg1, edx, ecx_1)
    int32_t** result
    result.b = ebx.b
    return result
}
