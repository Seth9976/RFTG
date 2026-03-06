// 函数名称: sub_669db0
// 虚拟地址: 0x669db0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_669db0(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, char* arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    char* arg_4
    char* esi = arg_4
    char eax = (*(esi + 0x6c)).b
    
    if ((eax & 1) == 0)
        sub_664320(esi, "Missing IHDR before sCAL")
        noreturn
    
    if ((eax & 4) != 0)
        sub_664100(esi, "Invalid sCAL after IDAT")
        return sub_667b40(esi, arg5)
    
    if (arg4 != 0 && (*(arg4 + 8) & 0x4000) != 0)
        sub_664100(esi, "Duplicate sCAL chunk")
        return sub_667b40(esi, arg5)
    
    char const* const var_18_2
    
    if (arg5 u>= 4)
        char* eax_5 = sub_666560(esi, &arg5[1])
        *(esi + 0x2a8) = eax_5
        
        if (eax_5 != 0)
            sub_6667f0(esi, eax_5, arg5)
            arg5[*(esi + 0x2a8)] = 0
            
            if (sub_667b40(esi, 0) != 0)
                int32_t eax_9 = sub_666530(esi, *(esi + 0x2a8))
                *(esi + 0x2a8) = 0
                return eax_9
            
            char* eax_10 = *(esi + 0x2a8)
            char ecx_1 = *eax_10
            
            if (ecx_1 != 1 && ecx_1 != 2)
                sub_664100(esi, "Invalid sCAL ignored: invalid unit")
                int32_t eax_11 = sub_666530(esi, *(esi + 0x2a8))
                *(esi + 0x2a8) = 0
                return eax_11
            
            arg_4 = 1
            var_8 = 0
            
            if (sub_662aa0(eax_10, arg5, &var_8, &arg_4) == 0)
                sub_664100(esi, "Invalid sCAL chunk ignored: bad width format")
            else
                char* eax_13 = arg_4
                
                if (eax_13 u>= arg5)
                    sub_664100(esi, "Invalid sCAL chunk ignored: bad width format")
                else
                    char* ecx_3 = *(esi + 0x2a8)
                    char edx_2 = *(ecx_3 + eax_13)
                    arg_4 = &eax_13[1]
                    
                    if (edx_2 != 0)
                        sub_664100(esi, "Invalid sCAL chunk ignored: bad width format")
                    else if ((var_8 & 0x188) == 0x108)
                        var_8 = 0
                        
                        if (sub_662aa0(ecx_3, arg5, &var_8, &arg_4) == 0 || arg_4 != arg5)
                            sub_664100(esi, "Invalid sCAL chunk ignored: bad height format")
                        else if ((var_8 & 0x188) == 0x108)
                            char* eax_18 = *(esi + 0x2a8)
                            sub_664990(esi, arg4, sx.d(*eax_18), &eax_18[1], eax_18 + &eax_13[1])
                        else
                            sub_664100(esi, "Invalid sCAL chunk ignored: non-positive height")
                    else
                        sub_664100(esi, "Invalid sCAL chunk ignored: non-positive width")
            
            int32_t eax_20 = sub_666530(esi, *(esi + 0x2a8))
            *(esi + 0x2a8) = 0
            return eax_20
        
        var_18_2 = "Out of memory while processing sCAL chunk"
    else
        var_18_2 = "sCAL chunk too short"
    
    sub_664100(esi, var_18_2)
    return sub_667b40(esi, arg5)
}
