// 函数名称: sub_46e510
// 虚拟地址: 0x46e510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_46e510(int32_t arg1, void* arg2, void* arg3, int32_t* arg4, char* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68eae0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg3 + 0x1ec3) != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return "Game Over"
    
    if (*(*(data_27e7a40 + 0x548) + 0x2c0a2) != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return "AI running"
    
    void var_14
    
    switch (*(arg2 + 0x1c))
        case 0, 0x20
            fsbase->NtTib.ExceptionList = ExceptionList
            return &data_83f3d3
        case 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return "Choose starting world"
        case 2, 3
            int32_t eax_21 = *(arg2 + 0x550)
            int32_t esi_2 = *(arg2 + 0x554)
            
            if (eax_21 == 0)
                if (esi_2 == 3 && *(arg3 + 0x1ec0) == 0xff && *(arg3 + 0x1ec2) == eax_21.b)
                    *arg4 = esi_2
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "Choose 3 cards to discard (due to Ancient Race)"
                
                if (esi_2 != 1)
                    *arg4 = esi_2
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "Drag [num] cards to discard"
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return "Drag 1 card to discard"
            
            if (eax_21 == esi_2)
                if (eax_21 != 1)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "Press OK to confirm Discards"
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return "Press OK to confirm Discard"
            
            int32_t esi_3 = esi_2 - eax_21
            
            if (esi_3 == 1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "Drag 1 more card to discard"
            
            *arg4 = esi_3
            fsbase->NtTib.ExceptionList = ExceptionList
            return "Drag [num] more cards to discard"
        case 4
            int32_t eax_9 = *(arg2 + 0x1f58)
            int32_t ecx_6 = *(arg2 + 0x1f54)
            
            if (eax_9 == ecx_6)
                if (eax_9 != 1)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "Press OK to confirm actions"
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return "Press OK to confirm action"
            
            if (eax_9 s> 1)
                if (ecx_6 != 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "Choose a Second Action"
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return "Choose Actions"
            
            int32_t esi_1 = *(arg2 + 0x18)
            
            if (esi_1 == 1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "Choose First Action"
            
            if (esi_1 != 2)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "Choose Action"
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return "Choose Second Action"
        case 5
            if (*(sub_418a10() + 0x1ec0) != 5 && *(sub_418a10() + 0x1ec0) != 6)
                if (*(sub_418a10() + 0x1ec0) != 3 && *(sub_418a10() + 0x1ec0) != 4)
                    int32_t eax_33 = *(arg2 + 0x550)
                    int32_t esi_4 = *(arg2 + 0x554)
                    
                    if (eax_33 == 0)
                        if (esi_4 != 1)
                            *arg4 = esi_4
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return "{blue_prompt}Explore{prompt}: Drag [num] cards to discard"
                        
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return "{blue_prompt}Explore{prompt}: Drag 1 card to discard"
                    
                    if (eax_33 == esi_4)
                        if (eax_33 != 1)
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return "{blue_prompt}Explore{prompt}: Press OK to confirm Discards"
                        
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return "{blue_prompt}Explore{prompt}: Press OK to confirm Discard"
                    
                    int32_t esi_5 = esi_4 - eax_33
                    
                    if (esi_5 == 1)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return "{blue_prompt}Explore{prompt}: Drag 1 more card to discard"
                    
                    *arg4 = esi_5
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Explore{prompt}: Drag [num] more cards to discard"
                
                int32_t eax_40 = *(arg2 + 0x550)
                int32_t esi_6 = *(arg2 + 0x554)
                
                if (eax_40 == 0)
                    if (esi_6 != 1)
                        *arg4 = esi_6
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return "{blue_prompt}Develop{prompt}: Drag [num] cards to discard"
                    
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Develop{prompt}: Drag 1 card to discard"
                
                if (eax_40 == esi_6)
                    if (eax_40 != 1)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return "{blue_prompt}Develop{prompt}: Press OK to confirm Discards"
                    
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Develop{prompt}: Press OK to confirm Discard"
                
                int32_t esi_7 = esi_6 - eax_40
                
                if (esi_7 == 1)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Develop{prompt}: Drag 1 more card to discard"
                
                *arg4 = esi_7
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Develop{prompt}: Drag [num] more cards to discard"
            
            int32_t eax_47 = *(arg2 + 0x550)
            int32_t esi_8 = *(arg2 + 0x554)
            
            if (eax_47 == 0)
                if (esi_8 != 1)
                    *arg4 = esi_8
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Settle{prompt}: Drag [num] cards to discard"
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Settle{prompt}: Drag 1 card to discard"
            
            if (eax_47 == esi_8)
                if (eax_47 != 1)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Settle{prompt}: Press OK to confirm Discards"
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Settle{prompt}: Press OK to confirm Discard"
            
            int32_t esi_9 = esi_8 - eax_47
            
            if (esi_9 == 1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Settle{prompt}: Drag 1 more card to discard"
            
            *arg4 = esi_9
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Settle{prompt}: Drag [num] more cards to discard"
        case 6
            if (*(arg2 + 0x1a08) != 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Develop{prompt}: You may place a development"
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Develop{prompt}: Nothing to Develop"
        case 7
            int32_t eax_67 = *(arg2 + 0x24)
            int32_t ebx_2 = *(arg2 + 0x554) - *(arg2 + 0x550)
            
            if (eax_67 == 0xffffffff)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "?? Develop payment"
            
            int32_t edx_2 = eax_67 * 5
            sub_4c4330(**(arg3 + (edx_2 << 2) + 0x46c), edx_2, &var_14)
            int32_t var_8_1 = 0
            
            if (ebx_2 == 0)
                int32_t var_8_2 = 0xffffffff
                sub_4c43d0(&var_14)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Develop{prompt}: Press OK to confirm payment"
            
            if (sub_4464e0(arg2) != 0 && *(arg2 + 0x550) == 0)
                if (ebx_2 == 1)
                    sub_4c4510(&var_14)
                    int32_t var_8_3 = 0xffffffff
                    sub_4c43d0(&var_14)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Develop{prompt}: Scavenge a card to develop [card]"
                
                *arg4 = ebx_2 - 1
                sub_4c4510(&var_14)
                int32_t var_8_4 = 0xffffffff
                void* ecx_110 = &var_14
                
                if (*arg4 != 1)
                    sub_4c43d0(ecx_110)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Develop{prompt}: Scavenge a card, then pay [num] more cards to "
                    "develop [card]"
                
                sub_4c43d0(ecx_110)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Develop{prompt}: Scavenge a card, then pay 1 more card to develop [card]"
            
            if (ebx_2 == 1)
                if (*(arg2 + 0x550) != 0)
                    sub_4c4510(&var_14)
                    int32_t var_8_6 = 0xffffffff
                    sub_4c43d0(&var_14)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Develop{prompt}: Pay 1 more card to develop [card]"
                
                sub_4c4510(&var_14)
                int32_t var_8_5 = 0xffffffff
                sub_4c43d0(&var_14)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Develop{prompt}: Pay 1 card to develop [card]"
            
            if (*(arg2 + 0x550) != 0)
                *arg4 = ebx_2
                sub_4c4510(&var_14)
                int32_t var_8_8 = 0xffffffff
                sub_4c43d0(&var_14)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Develop{prompt}: Pay [num] more cards to develop [card]"
            
            *arg4 = ebx_2
            sub_4c4510(&var_14)
            int32_t var_8_7 = 0xffffffff
            sub_4c43d0(&var_14)
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Develop{prompt}: Pay [num] cards to develop [card]"
        case 8
            if (*(arg2 + 0x550) == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "Choose a card to discard for prestige or Pass"
            
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x9fb, "ComputeHelpString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        case 9
            fsbase->NtTib.ExceptionList = ExceptionList
            return "Choose a card to save under Galactic Scavengers"
        case 0xa
            if (*(arg2 + 0x1a08) == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Settle{prompt}: Nothing to Settle"
            
            if (*(arg2 + 0x568) == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Settle{prompt}: You may place a world"
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Settle{prompt}: You may place a world (or pass to takeover)"
        case 0xb
            int32_t eax_83 = *(arg2 + 0x24)
            int32_t ebx_10 = *(arg2 + 0x554) - *(arg2 + 0x550)
            
            if (eax_83 == 0xffffffff)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Settle{prompt}: Settle Payment for Takeover?"
            
            sub_4c4330(**(arg3 + eax_83 * 0x14 + 0x46c), arg2, &var_14)
            int32_t var_8_9 = 1
            
            if (ebx_10 s< 0)
                sub_4c4510(&var_14)
                int32_t var_8_10 = 0xffffffff
                sub_4c43d0(&var_14)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Settle{prompt}: Select a settlement power to settle [card]"
            
            if (ebx_10 == 0)
                int32_t var_8_11 = 0xffffffff
                sub_4c43d0(&var_14)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Settle{prompt}: Press OK to confirm payment"
            
            if (sub_4464e0(arg2) != 0 && *(arg2 + 0x550) == 0)
                if (ebx_10 == 1)
                    sub_4c4510(&var_14)
                    int32_t var_8_12 = 0xffffffff
                    sub_4c43d0(&var_14)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Settle{prompt}: Scavenge a card to settle [card]"
                
                *arg4 = ebx_10 - 1
                sub_4c4510(&var_14)
                int32_t var_8_13 = 0xffffffff
                void* ecx_147 = &var_14
                
                if (*arg4 != 1)
                    sub_4c43d0(ecx_147)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Settle{prompt}: Scavenge a card, then pay [num] more cards to "
                    "settle [card]"
                
                sub_4c43d0(ecx_147)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "
                    {blue_prompt}Settle{prompt}: Scavenge a card, then pay 1 more card to settle [card]"
            
            if (ebx_10 == 1)
                if (*(arg2 + 0x550) != 0)
                    sub_4c4510(&var_14)
                    int32_t var_8_15 = 0xffffffff
                    sub_4c43d0(&var_14)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Settle{prompt}: Pay 1 more card to settle [card]"
                
                sub_4c4510(&var_14)
                int32_t var_8_14 = 0xffffffff
                sub_4c43d0(&var_14)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Settle{prompt}: Pay 1 card to settle [card]"
            
            if (*(arg2 + 0x550) != 0)
                *arg4 = ebx_10
                sub_4c4510(&var_14)
                int32_t var_8_17 = 0xffffffff
                sub_4c43d0(&var_14)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Settle{prompt}: Pay [num] more cards to settle [card]"
            
            *arg4 = ebx_10
            sub_4c4510(&var_14)
            int32_t var_8_16 = 0xffffffff
            sub_4c43d0(&var_14)
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Settle{prompt}: Pay [num] cards to settle [card]"
        case 0xc
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Settle{prompt}: Choose a settlement power"
        case 0xd
            if (*(arg2 + 0xa94) != 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Settle{prompt}: Choose a replacement world"
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Settle{prompt}: Choose a world to upgrade"
        case 0xe
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Trade{prompt}: Drag a good to trade"
        case 0xf
            if (*(arg2 + 0x1f38) == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Consume{prompt}: Choose a consume power"
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Consume{prompt}: Choose a consume power or pass"
        case 0x10
            int32_t eax_104 = *(arg2 + 0x558)
            int32_t eax_105 = eax_104 - *(arg2 + 0x550)
            
            if (eax_104 == *(arg2 + 0x550))
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Consume{prompt}: Confirm Goods"
            
            if (eax_105 s<= 1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Consume{prompt}: Choose a good to consume"
            
            *arg4 = eax_105
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Consume{prompt}: Drag [num] goods to consume"
        case 0x11
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Gambling World{prompt}: Choose a number"
        case 0x12
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Gambling World{prompt}: Drag a card to Ante"
        case 0x13
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Gambling World{prompt}: Drag a card to keep"
        case 0x14
            int32_t ecx_199 = *(arg2 + 0x558)
            int32_t edx_4 = *(arg2 + 0x550)
            int32_t eax_119 = ecx_199 - edx_4
            
            if (ecx_199 == edx_4)
                if (ecx_199 s> 1)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Consume{prompt}: Confirm discards"
                
                if (ecx_199 == 1)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Consume{prompt}: Confirm discard"
            
            if (edx_4 != 0)
                if (*(arg2 + 0x554) != ecx_199)
                    if (eax_119 == 1)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return "{blue_prompt}Consume{prompt}: Choose up to 1 more card to discard"
                    
                    *arg4 = eax_119
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Consume{prompt}: Choose up to %d more cards to discard"
                
                if (eax_119 == 1)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Consume{prompt}: Choose 1 more card to discard"
                
                *arg4 = eax_119
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Consume{prompt}: Choose [num] more cards to discard"
            
            if (*(arg2 + 0x554) == ecx_199)
                if (eax_119 != 1)
                    *arg4 = eax_119
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Consume{prompt}: Choose [num] cards to discard"
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Consume{prompt}: Choose 1 card to discard"
            
            if (eax_119 == 1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Consume{prompt}: Choose up to 1 card to discard"
            
            *arg4 = eax_119
            
            if (*(arg2 + 0x564) != 0xffffffff)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Consume{prompt}: Choose up to [num] cards to discard"
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Consume{prompt}: Choose up to [num] cards to discard (Prestige Bonus)"
        case 0x15
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Produce{prompt}: Choose a produce power"
        case 0x16
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Produce{prompt}: Choose a windfall world to produce"
        case 0x17
            int32_t eax_112 = *(arg2 + 0x550)
            
            if (eax_112 == 1 && (*(arg2 + 0xa94) == 1 || *(arg2 + 0x1f30) == 1))
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Produce{prompt}: Confirm production"
            
            bool cond:2
            
            if (*(arg2 + 0xa94) != 0)
                cond:2 = *(arg2 + 0x1f30) != 1
            else
                int32_t temp4_1 = *(arg2 + 0x1f30)
                cond:2 = temp4_1 != 1
                
                if (temp4_1 s> 1)
                    if (eax_112 != 1)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return "{blue_prompt}Produce{prompt}: Choose windfall world to produce or pass"
                    
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Produce{prompt}: Choose windfall world to produce"
            
            if (cond:2)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Produce{prompt}: Drag a card to discard"
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Produce{prompt}: Drag a card to discard or pass"
        case 0x18
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Search{prompt}: Choose search type"
        case 0x19
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Search{prompt}: Drag card to keep or pass"
        case 0x1a
            fsbase->NtTib.ExceptionList = ExceptionList
            return "Change Alien Oort Cloud Refinery type if desired"
        case 0x1b
            if (*(arg2 + 0xa94) == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Settle{prompt}: Choose Takeover Power"
            
            if (*(arg2 + 0x550) != 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Settle{prompt}: Press OK to confirm Takeover"
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Settle{prompt}: Choose Takeover Target"
        case 0x1c
            *arg4 = *(arg2 + 0x1f78)
            *arg5 = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Settle{prompt}: Choose Takeover Powers (Current Strength [num])"
        case 0x1d
            fsbase->NtTib.ExceptionList = ExceptionList
            return "{blue_prompt}Settle{prompt}: Choose Takeover to Prevent"
        case 0x1e
            if (*(arg2 + 0x1f80) == 0)
                *arg4 = *(arg2 + 0x1f7c)
                
                if (*(arg2 + 0x1f7c) s<= 0)
                    *arg4 = neg.d(*(arg2 + 0x1f7c))
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return "{blue_prompt}Settle{prompt}: Choose Takeover Defense (extra: [num])"
                
                *arg4 = *(arg2 + 0x1f7c)
                fsbase->NtTib.ExceptionList = ExceptionList
                return "{blue_prompt}Settle{prompt}: Choose Takeover Defense (losing by: [num])"
            
            int32_t var_28 = *(arg2 + 0x1f7c)
            void var_18
            char* result_1 =
                *sub_4c4a50(&var_18, "{blue_prompt}Settle{prompt}: Lost Takeover, Press OK to confirm")
            char* result = &data_83f3d3
            
            if (result_1 != 0)
                result = result_1
            
            sub_4c43d0(&var_18)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0xc30, "ComputeHelpString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
