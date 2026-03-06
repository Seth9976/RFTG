// 函数名称: sub_5d49f0
// 虚拟地址: 0x5d49f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d49f0(int32_t arg1)
{
    // 第一条实际指令: struct HINSTANCE__* var_10
    struct HINSTANCE__* var_10
    char* var_8
    
    if (sub_5d4980(&var_10, &var_8) == 0)
        sub_5cce60("Unable to create Direct3D interface")
        return 0
    
    int16_t* eax_2 = sub_5c8e80(arg1)
    int32_t* edi = var_8
    int32_t result_1 = 0
    int32_t result
    
    if (eax_2 != 0)
        int32_t var_470_1 = sub_5cd1d0(eax_2) * 2 + 2
        int16_t* var_474_1 = eax_2
        char* eax_5 = sub_5dd160("UTF-8", "UTF-16LE")
        int32_t edx_1 = *(*edi + 0x10)
        var_8 = eax_5
        int32_t eax_6 = edx_1(edi)
        int32_t result_2 = 0
        
        if (eax_6 != 0)
            do
                void var_45c
                (*(*edi + 0x14))(edi, result_2, 0, &var_45c)
                char var_5c[0x4c]
                
                if (sub_5cd590(&var_5c, var_8) == 0)
                    result_1 = result_2
                    break
                
                result_2 += 1
            while (result_2 u< eax_6)
        
        char* var_46c_5 = var_8
        sub_5d0af0()
        result = result_1
    else
        sub_5cce60("Invalid display index")
        result = 0xffffffff
    
    (*(*edi + 8))(edi)
    sub_5df000(var_10)
    return result
}
