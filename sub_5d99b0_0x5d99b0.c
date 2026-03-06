// 函数名称: sub_5d99b0
// 虚拟地址: 0x5d99b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5d99b0(int32_t* arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: if (arg1 == 0 || *arg1 != 0xbf7fc4)
    if (arg1 == 0 || *arg1 != 0xbf7fc4)
        sub_5cce60("Invalid renderer")
        return 0
    
    if (arg2 == 0)
        int32_t eax_1 = arg1[0x1d]
        arg2 = eax_1
        
        if (eax_1 == 0 || (arg2 & 0xf0000000) == 0x10000000)
        label_5d99f0:
            int32_t eax_6 = arg2 u>> 0x18 & 0xf
            
            if (eax_6 == 1 || eax_6 == 2 || eax_6 == 3)
                sub_5cce60("Palettized textures are not supported")
                return 0
    else if ((arg2 & 0xf0000000) == 0x10000000)
        goto label_5d99f0
    
    if (arg4 s<= 0 || arg5 s<= 0)
        sub_5cce60("Texture dimensions can't be 0")
        return 0
    
    int32_t ecx = arg1[0x2d]
    
    if (ecx == 0 || arg4 s<= ecx)
        int32_t eax_8 = arg1[0x2e]
        
        if (eax_8 == 0 || arg5 s<= eax_8)
            int32_t var_14_1 = 0x50
            int32_t var_18 = 1
            int32_t* result = sub_5d0ad0()
            
            if (result == 0)
                sub_5cd050(result)
                return 0
            
            *result = 0xbf7fc5
            result[1] = arg2
            result[2] = arg3
            result[3] = arg4
            result[4] = arg5
            result[7] = 0xffffffff
            result[8] = arg1
            result[0x13] = arg1[0x49]
            void* eax_13 = arg1[0x49]
            
            if (eax_13 != 0)
                *(eax_13 + 0x48) = result
            
            arg1[0x49] = result
            
            if (sub_5d8f20(arg2, arg1, arg2) == 0)
                int32_t* var_20_1 = arg1
                void* eax_20 = sub_5d99b0(arg1, sub_5d8f50(arg2, arg4), arg3, arg4, arg5)
                result[9] = eax_20
                
                if (eax_20 != 0)
                    *(eax_20 + 0x4c) = result[0x13]
                    void* eax_21 = result[9]
                    void* ecx_4 = *(eax_21 + 0x4c)
                    
                    if (ecx_4 != 0)
                        *(ecx_4 + 0x48) = eax_21
                    
                    void* eax_22 = *(result[9] + 0x48)
                    result[0x12] = eax_22
                    
                    if (eax_22 != 0)
                        *(eax_22 + 0x4c) = result
                    
                    *(result[9] + 0x48) = result
                    result[0x13] = result[9]
                    arg1[0x49] = result
                    int32_t eax_24 = result[1]
                    int32_t* eax_27
                    
                    if (eax_24 == 0 || (eax_24 & 0xf0000000) == 0x10000000)
                        if (arg3 != 1)
                            return result
                        
                        uint32_t eax_29
                        
                        if (arg2 == 0 || (arg2 & 0xf0000000) == 0x10000000)
                            eax_29 = zx.d(arg2.b)
                        else if (arg2 == 0x32595559 || arg2 == 0x59565955 || arg2 == 0x55595659)
                            eax_29 = 2
                        else
                            eax_29 = 1
                        
                        int32_t eax_32 = (eax_29 * arg4 + 3) & 0xfffffffc
                        result[0xc] = eax_32
                        int32_t var_14_7 = eax_32 * arg5
                        int32_t var_18_4 = 1
                        eax_27 = sub_5d0ad0()
                        result[0xb] = eax_27
                    else
                        eax_27 = sub_610c70(arg2, arg4, arg5)
                        result[0xa] = eax_27
                    
                    if (eax_27 != 0)
                        return result
            else if (arg1[3](arg1, result) s>= 0)
                return result
            
            sub_5d9870(result)
            return 0
    
    int32_t __saved_edi = arg1[0x2e]
    int32_t var_14 = ecx
    sub_5cce60("Texture dimensions are limited to %dx%d")
    return 0
}
