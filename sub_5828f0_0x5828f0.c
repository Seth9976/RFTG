// 函数名称: sub_5828f0
// 虚拟地址: 0x5828f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWNDsub_5828f0(HWND arg1 @ edi)
{
    // 第一条实际指令: int32_t hInstance = GetWindowLongA(arg1, 0xfffffffa)
    int32_t hInstance = GetWindowLongA(arg1, 0xfffffffa)
    
    if (data_31600ac == 0)
        WNDCLASSEXA var_34
        var_34.cbSize = 0x30
        BOOL eax = GetClassInfoExA(nullptr, "ListBox", &var_34)
        
        if (eax != 0)
            var_34.lpfnWndProc = sub_582e10
            var_34.hInstance = hInstance
            var_34.lpszClassName = "PropGridCtl"
            eax = zx.d(RegisterClassExA(&var_34))
        
        data_31600ac = eax.w
    
    HWND result = CreateWindowExA(WS_EX_LEFT, "PropGridCtl", &data_83f3d3, 0x40010000, 0, 0, 0, 0, 
        arg1, 0xac, hInstance, nullptr)
    data_3160ee0 = result
    return result
}
