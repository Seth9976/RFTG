// 函数名称: sub_5ce710
// 虚拟地址: 0x5ce710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5ce710(void* arg1, int32_t arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: if (data_8b975c == 0 || arg2 u> 6)
    if (data_8b975c == 0 || arg2 u> 6)
        return 
    
    void* var_14 = arg1
    
    if (arg2 s< sub_5ce6c0(var_14))
        return 
    
    __alloca_probe_16(0x1000)
    int32_t __saved_edi
    
    if (&__saved_edi == 0)
        return 
    
    var_14 = arg4
    sub_5cd9c0(&__saved_edi, 0x1000, arg3, var_14)
    void* eax_2 = sub_5cd1b0(&__saved_edi)
    
    if (eax_2 != 0 && *(&var_14:3 + eax_2) == 0xa)
        *(eax_2 - 1 + &__saved_edi) = 0
        
        if (eax_2 != 1 && *(&var_14:3 + eax_2 - 1) == 0xd)
            *(eax_2 - 1 + &__saved_edi - 1) = 0
    
    int32_t edx_1 = data_bedcfc
    var_14 = &__saved_edi
    data_8b975c(edx_1, arg1, arg2, var_14)
}
