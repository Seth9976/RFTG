// 函数名称: sub_5d96c0
// 虚拟地址: 0x5d96c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d96c0(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_24
    int32_t var_24
    __builtin_memset(&var_24, 0, 0x20)
    
    if (arg1 == 0 || *arg1 != 0xbf7fc4)
        sub_5cce60("Invalid renderer")
        return 0xffffffff
    
    int32_t* edi = arg2
    
    if (edi == 0 || *edi != 0xbf7fc5)
        sub_5cce60("Invalid texture")
        return 0xffffffff
    
    if (arg1 != edi[8])
        sub_5cce60("Texture was not created with this renderer")
        return 0xffffffff
    
    int32_t ecx = edi[4]
    int32_t var_1c = edi[3]
    var_24 = 0
    int32_t var_20 = 0
    int32_t var_18 = ecx
    
    if (arg3 == 0)
    label_5d975c:
        int32_t var_14
        sub_5d9600(arg1, &var_14)
        var_14 = 0
        int32_t var_10_1 = 0
        
        if (arg4 == 0)
            goto label_5d979c
        
        if (sub_5d4d20(arg4, &var_14) != 0)
            int32_t ecx_1 = arg4[1]
            var_14 = *arg4
            var_10_1 = ecx_1
            int32_t var_c_1 = arg4[2]
            int32_t var_8_1 = arg4[3]
        label_5d979c:
            int32_t* eax_7 = edi[9]
            
            if (eax_7 != 0)
                edi = eax_7
            
            if (arg1[0x30] == 0)
                int32_t eax_9 = arg1[0x12]
                float var_34 = fconvert.s(float.t(var_14) * fconvert.t(arg1[0x45]))
                float var_30 = fconvert.s(float.t(var_10_1) * fconvert.t(arg1[0x46]))
                float var_2c = fconvert.s(float.t(var_c_1) * fconvert.t(arg1[0x45]))
                float var_28 = fconvert.s(float.t(var_8_1) * fconvert.t(arg1[0x46]))
                return eax_9(arg1, edi, &var_24, &var_34)
    else if (sub_5d4dd0(arg3, &var_24, &var_24) != 0)
        goto label_5d975c
    
    return 0
}
