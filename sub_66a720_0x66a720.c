// 函数名称: sub_66a720
// 虚拟地址: 0x66a720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_66a720(char* arg1, void* arg2, uint32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t eax = *(arg1 + 0x288)
    
    if (eax == 0)
    label_66a76b:
        int32_t eax_3 = *(arg1 + 0x6c)
        
        if ((eax_3.b & 4) != 0 && *(arg1 + 0x100) != 0x49444154)
            *(arg1 + 0x6c) = eax_3 | 8
        
        int32_t eax_5 = *(arg1 + 0x100)
        
        if ((eax_5 & 0x20000000) == 0 && sub_662810(arg1, eax_5) != 3 && *(arg1 + 0x244) == 0)
            sub_664380(arg1, "unknown critical chunk")
            noreturn
        
        if ((*(arg1 + 0x70) & 0x8000) != 0 || *(arg1 + 0x244) != 0)
            int32_t eax_9 = *(arg1 + 0x100)
            arg1[0x290] = (eax_9 u>> 0x18).b
            uint8_t edx_1 = arg1[0x100]
            arg1[0x291] = (eax_9 u>> 0x10).b
            arg1[0x292] = (eax_9 u>> 8).b
            arg1[0x293] = edx_1
            arg1[0x294] = 0
            *(arg1 + 0x29c) = arg3
            
            if (arg3 != 0)
                char* eax_11 = sub_6664e0(arg1, arg3)
                *(arg1 + 0x298) = eax_11
                sub_664410(arg1, eax_11, arg3)
                sub_662280(arg1, eax_11, arg3)
            else
                *(arg1 + 0x298) = arg3
            
            int32_t eax_13 = *(arg1 + 0x244)
            
            if (eax_13 == 0)
                int32_t var_18_6 = 1
                sub_665300(arg1, arg2, &arg1[0x290], 1)
            else
                int32_t eax_14 = eax_13(arg1, &arg1[0x290])
                
                if (eax_14 s< 0)
                    sub_664380(arg1, "error in user chunk")
                    noreturn
                
                if (eax_14 == 0)
                    int32_t eax_15 = *(arg1 + 0x100)
                    
                    if ((eax_15 & 0x20000000) == 0 && sub_662810(arg1, eax_15) != 3)
                        sub_664380(arg1, "unknown critical chunk")
                        noreturn
                    
                    int32_t var_18_5 = 1
                    sub_665300(arg1, arg2, &arg1[0x290], 1)
            
            sub_666530(arg1, *(arg1 + 0x298))
            *(arg1 + 0x298) = 0
            return sub_667b40(arg1, 0)
    else if (eax != 1)
        *(arg1 + 0x288) = eax - 1
        
        if (eax != 2)
            goto label_66a76b
        
        sub_664100(arg1, "No space in chunk cache for unknown chunk")
    
    return sub_667b40(arg1, arg3)
}
