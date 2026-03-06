// 函数名称: sub_537f00
// 虚拟地址: 0x537f00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __fastcallsub_537f00(char* arg1)
{
    // 第一条实际指令: char* var_8 = arg1
    char* var_8 = arg1
    LRESULT eax = sub_536e40()
    
    if (eax != 0x4a && eax != 5 && eax != 8 && eax != 9 && eax != 0xa && eax != 0xb && eax != 0x4c)
        ShowWindow(GetDlgItem(data_3078830, 0x87), SW_HIDE)
        return ShowWindow(GetDlgItem(data_3078830, 0x88), SW_HIDE)
    
    ShowWindow(GetDlgItem(data_3078830, 0x87), SW_SHOW)
    ShowWindow(GetDlgItem(data_3078830, 0x88), SW_SHOW)
    void* eax_8
    int32_t edx_1
    eax_8, edx_1 = sub_5370b0()
    
    if (eax_8 == 0)
        return SetDlgItemTextA(data_3078830, 0x87, &data_83f3d3)
    
    sub_537dd0(eax_8, edx_1, eax_8, &var_8)
    char* const lpString = var_8
    
    if (lpString == 0)
        lpString = &data_83f3d3
    
    SetDlgItemTextA(data_3078830, 0x87, lpString)
    char* result = var_8
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&var_8)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_1 = *(result + 0xc) + 0x10
            return sub_4f4430(result, sub_4f4380(esi_1), esi_1)
    
    return result
}
