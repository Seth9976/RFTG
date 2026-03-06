// 函数名称: sub_53b150
// 虚拟地址: 0x53b150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __convention("regparm")sub_53b150(int32_t arg1, int32_t* arg2 @ esi)
{
    // 第一条实际指令: BOOL result_1
    BOOL result_1
    sub_53a0a0(arg1, &result_1, arg2)
    BOOL result = result_1
    
    if (result != 1)
        if (result != 2)
            if (result != 3)
                return result
            
            int32_t eax_2 = sub_53ad40(arg1, arg2)
            HWND hWnd = data_3078830
            data_3078834 = eax_2
            data_307883c.w = 0x100
            SetFocus(hWnd)
            SetCapture(data_3078830)
            return sub_5381f0()
        
        data_307883c.w = 0x101
    else
        data_307883c.w = 0x100
    
    HWND hWnd_1 = data_3078830
    int32_t var_8
    data_3078834 = var_8
    SetFocus(hWnd_1)
    SetCapture(data_3078830)
    return sub_5381f0()
}
