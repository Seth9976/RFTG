// 函数名称: sub_57fa50
// 虚拟地址: 0x57fa50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWND __convention("regparm")sub_57fa50(int32_t arg1, HWND arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int16_t var_1c = 0
    char var_1a = 0
    SYSTEMTIME var_18
    __builtin_memset(&var_18, 0, 0x10)
    HWND result = *(arg3 + 0x14)
    int32_t Y = arg5 + 1
    var_14
    
    if (result == 0xa)
        int32_t* edi_1 = data_26a6554
        
        if (edi_1[7] == 0)
            *(data_26a6554 + 0x1c) = sub_57e170(1, 0x7d6, *edi_1, arg2)
            edi_1 = data_26a6554
        
        MoveWindow(edi_1[7], arg4, Y, arg6 - arg4, arg7 - Y, 1)
        SYSTEMTIME* var_58_2 = &var_18
        void* var_5c_2 = &var_14:2
        uint16_t* var_60_2 = &var_18.wMonth
        sub_5a957c(*(arg3 + 0x10), "%hd/%hd/%hd")
        SendMessageA(*(data_26a6554 + 0x1c), 0x1002, 0, &var_18)
        ShowWindow(*(data_26a6554 + 0x1c), SW_SHOW)
        result = SetFocus(*(data_26a6554 + 0x1c))
    else
        var_10
        var_c
        
        if (result == 0xb)
            HINSTANCE* edi_2 = data_26a6554
            
            if (edi_2[7] == 0)
                *(data_26a6554 + 0x1c) = sub_57e170(0, 0x7d7, *edi_2, arg2)
                edi_2 = data_26a6554
            
            MoveWindow(edi_2[7], arg4, Y, arg6 - arg4, arg7 - Y, 1)
            GetLocalTime(&var_18)
            int16_t* var_58_7 = &var_1c
            void* var_5c_5 = &var_c
            void* var_60_4 = &var_10:2
            void* var_64_4 = &var_10
            sub_5a957c(*(arg3 + 0x10), "%hd:%hd:%hd %2s")
            
            if (__Cnd_wait(0x895508, &var_1c) == 0 && var_18.wHour != 0xc)
                var_18.wHour += 0xc
            
            SendMessageA(*(data_26a6554 + 0x1c), 0x1002, 0, &var_18)
            ShowWindow(*(data_26a6554 + 0x1c), SW_SHOW)
            result = SetFocus(*(data_26a6554 + 0x1c))
        else if (result == 0xc)
            int32_t var_2c_1 = arg6
            int32_t eax_16
            int32_t edx_12
            edx_12:eax_16 = sx.q(arg6 - arg4)
            int32_t* ecx_10 = data_26a6554
            int32_t var_44_1 = arg4
            int32_t X = arg4 + ((eax_16 - edx_12) s>> 1)
            
            if (ecx_10[7] == 0)
                *(data_26a6554 + 0x1c) = sub_57e170(1, 0x7d6, *ecx_10, arg2)
                ecx_10 = data_26a6554
            
            MoveWindow(ecx_10[7], arg4, Y, X - arg4, arg7 - Y, 1)
            HINSTANCE* ecx_13 = data_26a6554
            
            if (ecx_13[8] == 0)
                *(data_26a6554 + 0x20) = sub_57e170(0, 0x7d7, *ecx_13, arg2)
                ecx_13 = data_26a6554
            
            MoveWindow(ecx_13[8], X, Y, arg6 - X, arg7 - Y, 1)
            int16_t* var_58_11 = &var_1c
            void* var_5c_9 = &var_c
            void* var_60_7 = &var_10:2
            void* var_64_8 = &var_10
            SYSTEMTIME* var_68_6 = &var_18
            void* var_6c_6 = &var_14:2
            uint16_t* var_70_2 = &var_18.wMonth
            sub_5a957c(*(arg3 + 0x10), "%hd/%hd/%hd %hd:%hd:%hd %2s")
            
            if (__Cnd_wait(0x895508, &var_1c) == 0 && var_18.wHour != 0xc)
                var_18.wHour += 0xc
            
            SendMessageA(*(data_26a6554 + 0x1c), 0x1002, 0, &var_18)
            SendMessageA(*(data_26a6554 + 0x20), 0x1002, 0, &var_18)
            ShowWindow(*(data_26a6554 + 0x1c), SW_SHOW)
            ShowWindow(*(data_26a6554 + 0x20), SW_SHOW)
            result = SetFocus(*(data_26a6554 + 0x1c))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
