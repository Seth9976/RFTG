// 函数名称: sub_5c20b0
// 虚拟地址: 0x5c20b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5c20b0(char* arg1, int32_t* arg2, void* arg3, char arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg4
    
    if (arg3 == 0 && ebx.b == 0)
        return 0
    
    int32_t eax_1
    eax_1.b = ebx.b != 0
    char* result = sub_5a881a(eax_1 + arg3)
    
    if (result == 0)
        zip_error_set(arg5, 0xe, result)
        return 0
    
    if (arg1 == 0)
        if (sub_5c2020(arg2, result, arg3, 0, arg5) s< 0)
            __free_base(result)
            return 0
    else
        int128_t* eax_5 = sub_5c0c80(arg1, arg3, 0)
        
        if (eax_5 == 0)
            zip_error_set(arg5, 0xe, eax_5)
            __free_base(result)
            return 0
        
        sub_5ab990(result, eax_5, arg3)
    
    if (ebx.b != 0)
        void* ecx_2 = result + arg3
        *ecx_2 = 0
        char* result_1 = result
        
        if (result u< ecx_2)
            do
                if (*result_1 == 0)
                    *result_1 = 0x20
                
                result_1 = &result_1[1]
            while (result_1 u< ecx_2)
    
    return result
}
