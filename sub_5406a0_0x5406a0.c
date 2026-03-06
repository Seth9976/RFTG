// 函数名称: sub_5406a0
// 虚拟地址: 0x5406a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __stdcallsub_5406a0(HWND arg1, uint32_t arg2, WPARAM arg3, LPARAM arg4)
{
    // 第一条实际指令: __chkstk(0x104c)
    __chkstk(0x104c)
    void var_8
    int32_t eax_1 = __security_cookie ^ &var_8
    
    if (arg2 == 0xf)
        int32_t __saved_ebp
        sub_53b250(BeginPaint(arg1, &__saved_ebp))
        EndPaint(arg1, &__saved_ebp)
    else if (arg2 != 0x4e)
        if (arg2 != 0x111)
            LRESULT result = DefWindowProcA(arg1, arg2, arg3, arg4)
            sub_5a6aba(eax_1 ^ &var_8)
            return result
        
        if (arg3 u>> 0x10 == 1 && arg3.w == 0xab)
            HWND hWnd = GetDlgItem(arg1, 0xab)
            LRESULT esi_1 = SendMessageA(hWnd, 0x190, 0, 0)
            
            if (esi_1 s> 0)
                if (esi_1 s> 0x400)
                    esi_1 = 0x400
                
                void lParam
                LRESULT eax_6
                int32_t edx_1
                eax_6, edx_1 = SendMessageA(hWnd, 0x191, 0x400, &lParam)
                sub_573a70(eax_6, edx_1, esi_1, &lParam)
            else if (data_273abf0 == 0)
                data_26a7764 = 0
                sub_56f3d0()
            
            sub_541330()
            SetFocus(data_30785e0)
    else if (arg3 == 0xac && *(arg4 + 8) == 0x42a)
        sub_53f7c0(*arg4, arg4)
    
    sub_5a6aba(eax_1 ^ &var_8)
    return 0
}
