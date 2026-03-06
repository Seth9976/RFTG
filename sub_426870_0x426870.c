// 函数名称: sub_426870
// 虚拟地址: 0x426870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_426870(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = *arg1
    int32_t var_430_1
    int32_t eax_3
    int32_t ecx
    
    if (eax_2 != 1)
        if (eax_2 != 6)
            int32_t eax_6 = arg1[0x17]
            int32_t edi = 0
            int32_t eax_16
            
            if (eax_6 == 0 || eax_6 == 1)
                eax_16 = arg1[0x18]
            label_426abc:
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_16
            
            char var_40d_1 = 0
            void* ebx_1
            
            if (arg2 == 0)
                ebx_1 = &arg1[0x16]
            else
                ebx_1 = &arg1[0x19]
            
            int32_t* edx_2 = *(data_27e7a40 + 0x548) + 0x43960
            int32_t* var_414 = nullptr
            int32_t var_40c[0x101]
            
            if (sub_463e30(ecx, edx_2, &var_414) != 0)
                int32_t (* var_418_1)[0x101] = &var_40c
                char i
                
                do
                    int32_t* ecx_3 = var_414
                    
                    if (*ecx_3 != 6)
                        int32_t eax_9 = ecx_3[0x17]
                        int32_t edx_3 = *(ebx_1 + 4)
                        
                        if (eax_9 == edx_3 && ecx_3[0x16] == *ebx_1)
                            goto label_426970
                        
                        if (ecx_3[0x1a] == edx_3 && ecx_3[0x19] == *ebx_1
                                && (eax_9 == 0x12 || eax_9 == 0x13 || eax_9 == 0x19 || eax_9 == 0x1a))
                            var_40d_1 = 1
                        label_426970:
                            int32_t (* esi_3)[0x101] = var_418_1
                            var_418_1 = &(*var_418_1)[2]
                            edi += 1
                            
                            if (edi s>= 0x80)
                                sub_4c5870("numCards < 128", &data_83f3d3, "..\code\RFTGClient.cpp", 
                                    0x16d5, "ComputeSlotFromGui")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            *esi_3 = ecx_3
                            ecx_3.b = sub_424520(ecx_3) != 0
                            (*esi_3)[1] = ecx_3
                    
                    i = sub_463e30(ecx_3, *(data_27e7a40 + 0x548) + 0x43960, &var_414)
                while (i != 0)
            
            int32_t (* var_430_3)(int32_t* arg1, int32_t* arg2)
            
            if (arg1[0x17] == 2 && arg1[0x16] == 0)
                int32_t eax_13 = *(sub_46b2b0(*(data_27e7a40 + 0x74)) + 0x1c)
                
                if (eax_13 == 3 || eax_13 == 5 || eax_13 == 0x13
                        || *(*(data_27e7a40 + 0x548) + 0x2c0b8) != 0 || eax_13 == 0x12)
                    var_430_3 = sub_426830
                else
                    var_430_3 = sub_4266b0
            else if (var_40d_1 == 0)
                var_430_3 = sub_426690
            else
                var_430_3 = sub_426670
            
            sub_4640b0(&var_40c, &(&__saved_ebp)[edi * 2 - 0x102], 
                (&(&__saved_ebp)[edi * 2 - 0x102] - &var_40c) s>> 3, var_430_3)
            eax_16 = 0
            
            if (edi s> 0)
                do
                    if (var_40c[eax_16 * 2] == arg1)
                        goto label_426abc
                    
                    eax_16 += 1
                while (eax_16 s< edi)
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
        
        eax_3 = arg1[0x24]
        var_430_1 = 0
    else
        var_430_1 = eax_2
        eax_3 = arg1[0x1f]
    
    int32_t var_434_1 = ecx
    int32_t eax_5 = sub_426870(sub_418870(eax_3), var_430_1)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_5
}
