// 函数名称: sub_52b500
// 虚拟地址: 0x52b500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_52b500(char* arg1 @ esi, char* arg2)
{
    // 第一条实际指令: int32_t var_14
    int32_t var_14
    int32_t* var_18 = &var_14
    int32_t var_10
    int32_t* var_1c = &var_10
    int32_t var_c
    int32_t* var_20 = &var_c
    int32_t var_8
    int32_t* var_24 = &var_8
    int32_t eax = sub_5a957c(arg2, " %d %d %d %d")
    
    if (eax == 4)
        int32_t eax_1 = var_8
        
        if (eax_1 s< 0)
            eax_1 = 0
        else if (eax_1 s> 0xff)
            eax_1 = 0xff
        
        *arg1 = eax_1.b
        int32_t eax_2 = var_c
        
        if (eax_2 s< 0)
            eax_2 = 0
        else if (eax_2 s> 0xff)
            eax_2 = 0xff
        
        arg1[1] = eax_2.b
        int32_t eax_3 = var_10
        
        if (eax_3 s< 0)
            eax_3 = 0
        else if (eax_3 s> 0xff)
            eax_3 = 0xff
        
        arg1[2] = eax_3.b
        int32_t eax_4 = var_14
        
        if (eax_4 s>= 0)
            if (eax_4 s> 0xff)
                eax_4 = 0xff
            
            arg1[3] = eax_4.b
            eax_4.b = 1
            return eax_4
        
        arg1[3] = 0
        int32_t eax_5
        eax_5.b = 1
        return 1
    
    if (eax != 3)
        if (eax != 1)
            eax.b = 0
            return eax
        
        int32_t eax_10 = var_8
        
        if (eax_10 s< 0)
            *arg1 = 0
            arg1[1] = 0
            arg1[2] = 0
            arg1[3] = 0xff
            int32_t eax_11
            eax_11.b = 1
            return 1
        
        if (eax_10 s> 0xff)
            eax_10 = 0xff
        
        *arg1 = eax_10.b
        arg1[1] = eax_10.b
        arg1[2] = eax_10.b
        arg1[3] = 0xff
        eax_10.b = 1
        return eax_10
    
    int32_t eax_6 = var_8
    
    if (eax_6 s< 0)
        eax_6 = 0
    else if (eax_6 s> 0xff)
        eax_6 = 0xff
    
    *arg1 = eax_6.b
    int32_t eax_7 = var_c
    
    if (eax_7 s< 0)
        eax_7 = 0
    else if (eax_7 s> 0xff)
        eax_7 = 0xff
    
    arg1[1] = eax_7.b
    int32_t eax_8 = var_10
    
    if (eax_8 s< 0)
        arg1[2] = 0
        arg1[3] = 0xff
        int32_t eax_9
        eax_9.b = 1
        return 1
    
    if (eax_8 s> 0xff)
        eax_8 = 0xff
    
    arg1[2] = eax_8.b
    arg1[3] = 0xff
    eax_8.b = 1
    return eax_8
}
