// 函数名称: sub_438770
// 虚拟地址: 0x438770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_438770(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = *arg1
    int32_t eax = *arg1
    uint32_t ecx
    
    if (eax u<= 0x26)
        ecx = zx.d(lookup_table_438950[eax])
        
        switch (ecx)
            case 0
                return sub_418870(arg1[3]) __tailcall
    
    if (eax - 0xc u> 4)
        if (eax == 2 || eax == 8)
            return sub_418920(arg1[3]) __tailcall
        
        if (eax == 0x11 || eax == 0x14 || eax == 0x12)
            arg1[8]
            return sub_418700(arg1[9])
        
        if (eax == 0x22)
            int128_t* eax_11 = sub_463e80(*(data_27e7a40 + 0x548) + 0x43960)
            *eax_11 = 2
            return eax_11
        
        void* esi_3
        
        if (eax != 0x20)
            if (eax != 0x21)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x30ff, 
                    "ActionItemCreateOrLink")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            esi_3 = *(data_27e7a40 + 0x548)
        else
            esi_3 = *(data_27e7a40 + 0x548)
        
        int128_t* eax_12 = sub_463e80(esi_3 + 0x43960)
        *eax_12 = 3
        return eax_12
    
    int32_t edx_2
    
    if (eax != 0x10)
        edx_2 = 0xffffffff
    else
        edx_2 = arg1[1]
    
    int128_t* eax_3 = sub_418790(ecx, edx_2, arg1[7])
    int32_t ecx_1 = *arg1
    
    if (ecx_1 != 0x10)
        if (ecx_1 == 0xf)
            int128_t* eax_6 = sub_438700(eax_3)
            *(eax_6 + 0x88) = 1
            return eax_6
        
        if (ecx_1 == 0xd && *(eax_3 + 0x64) != 0xffffffff && *(eax_3 + 0x84) s< 0xc)
            return sub_438700(eax_3) __tailcall
    else
        if (*(eax_3 + 0x88) != 1)
            sub_4c5870("goalSource.goalType == GOAL_SIVER", &data_83f3d3, "..\code\RFTGClient.cpp", 
                0x30d3, "ActionItemCreateOrLink")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*(eax_3 + 0x58) == 0xffffffff)
            sub_4c5870("goalSource.locCurrent.seat != (PlayerSeat)-1", &data_83f3d3, 
                "..\code\RFTGClient.cpp", 0x30d4, "ActionItemCreateOrLink")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    return eax_3
}
