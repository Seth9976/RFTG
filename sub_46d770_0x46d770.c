// 函数名称: sub_46d770
// 虚拟地址: 0x46d770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46d770(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* eax = sub_46b2b0(arg1)
    void* eax = sub_46b2b0(arg1)
    int32_t ebx = *(eax + 0x1f58)
    
    if (*(eax + 0x1f54) != ebx)
        sub_4c5870("pgui.numRolesChosen == pgui.numRolesToChoose", &data_83f3d3, 
            "..\code\RFTGShared.cpp", 0x77a, "RFTGHandleRoleConfirm")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (ebx == 2)
        int32_t eax_2 = *(eax + 0x1f4c)
        int32_t ecx_1 = *(eax + 0x1f44)
        
        if (ecx_1 == eax_2)
            sub_4c5870("pgui.rolesChosen[0].role != pgui.rolesChosen[1].role", &data_83f3d3, 
                "..\code\RFTGShared.cpp", 0x77e, "RFTGHandleRoleConfirm")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (ecx_1 s> eax_2)
            int32_t ecx_2 = *(eax + 0x1f48)
            *(eax + 0x1f44) = *(eax + 0x1f4c)
            *(eax + 0x1f48) = *(eax + 0x1f50)
            *(eax + 0x1f4c) = ecx_1
            *(eax + 0x1f50) = ecx_2
        
        if (*(eax + 0x1f44) == 4)
            *(eax + 0x1f44) = 3
        
        if (*(eax + 0x1f44) == 6)
            *(eax + 0x1f44) = 5
        
        if (*(eax + 0x1f4c) == 4 && *(eax + 0x1f44) != 3)
            *(eax + 0x1f4c) = 3
        
        if (*(eax + 0x1f4c) == 6 && *(eax + 0x1f44) != 5)
            *(eax + 0x1f4c) = 5
    
    bool cond:0 = *(eax + 0x1f48) == 0
    int32_t var_10 = *(eax + 0x1f44)
    
    if (not(cond:0))
        var_10 |= 0x80
    
    if (*(eax + 0x1f50) != 0)
        int32_t var_c_1 = *(eax + 0x1f4c) | 0x80
    
    int32_t eax_6 = 1
    
    if (ebx == 2)
        int32_t ecx_4 = *(eax + 0x18)
        
        if (ecx_4 == 0 || ecx_4 == ebx)
            eax_6 = 2
    
    int32_t var_24 = 1
    sub_469e10(arg2, arg1, 0, 0, &var_10, eax_6, 0, 0)
    sub_469ff0(arg1)
    
    if (*(eax + 0x18) != 1)
        return sub_422300()
    
    *(*(data_27e7a40 + 0x548) + 0x2c0a4) = 4
    return 0
}
