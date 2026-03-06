// 函数名称: sub_5380a0
// 虚拟地址: 0x5380a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __fastcallsub_5380a0(char* arg1)
{
    // 第一条实际指令: char* var_8 = arg1
    char* var_8 = arg1
    LRESULT eax
    int32_t edx
    eax, edx = sub_536e40()
    
    if (eax != 0)
        void* eax_1
        eax_1.b = *(sub_531280(eax, edx, &data_8c35ec) + 0x10) == 1
        
        if (eax_1.b != 0)
            ShowWindow(GetDlgItem(data_3078830, 0x94), SW_SHOW)
            sub_537000()
            sub_4c4ab0(&var_8)
            char* const lpString = var_8
            
            if (lpString == 0)
                lpString = &data_83f3d3
            
            SetDlgItemTextA(data_3078830, 0x94, lpString)
            char* result = var_8
            
            if (result != 0 && *result != 0)
                result = sub_4c4060(&var_8)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    int32_t esi_2 = *(result + 0xc) + 0x10
                    return sub_4f4430(result, sub_4f4380(esi_2), esi_2)
            
            return result
    
    return ShowWindow(GetDlgItem(data_3078830, 0x94), SW_HIDE)
}
