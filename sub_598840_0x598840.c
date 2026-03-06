// 函数名称: sub_598840
// 虚拟地址: 0x598840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_598840(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ edi, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    *(*arg4 + 8) = 0
    
    if (sub_598300(arg4) == 0)
        sub_5987f0()
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    int32_t eax_7 = *(*arg4 + 8)
    int32_t var_90 = eax_7
    int32_t var_94 = 0
    
    if (eax_7 s> 0)
        void* ebx_2 = &arg4[0xd68]
        void var_78
        void* esi_1 = &var_78
        void* var_8c_1 = ebx_2
        
        while (true)
            int32_t eax_9 = sub_5a881a(**arg4 + 3)
            *(ebx_2 + 0x30) = eax_9
            
            if (eax_9 == 0)
                goto label_598a24
            
            int32_t temp0_1 = divs.dp.d(sx.q(arg4[0xd61]), *ebx_2)
            *(esi_1 + 0xc) = 0
            int32_t temp0_2 = divs.dp.d(sx.q(arg4[0xd62]), *(ebx_2 + 4))
            *(esi_1 - 4) = temp0_1
            int32_t eax_17 = **arg4
            *(esi_1 + 8) = temp0_2 s>> 1
            *esi_1 = temp0_2
            *(esi_1 + 4) = divu.dp.d(0:(temp0_1 + eax_17 - 1), temp0_1)
            int32_t eax_20 = *(var_8c_1 + 0x28)
            *(esi_1 - 8) = eax_20
            *(esi_1 - 0xc) = eax_20
            
            if (temp0_1 != 1)
            label_59894a:
                
                if (temp0_1 != 2)
                    *(esi_1 - 0x10) = sub_5986c0
                else if (temp0_2 == 1)
                    *(esi_1 - 0x10) = sub_598560
                else if (temp0_2 != 2)
                    *(esi_1 - 0x10) = sub_5986c0
                else
                    *(esi_1 - 0x10) = sub_598610
            else if (temp0_2 != temp0_1)
                if (temp0_2 != 2)
                    goto label_59894a
                
                *(esi_1 - 0x10) = sub_598520
            else
                *(esi_1 - 0x10) = Platform::Details::Heap::Allocate
            
            var_8c_1 += 0x38
            int32_t eax_22 = var_94 + 1
            esi_1 += 0x20
            var_94 = eax_22
            
            if (eax_22 s>= var_90)
                eax_7 = var_90
                break
            
            ebx_2 = var_8c_1
    
    int32_t* ebx_10 = *arg4
    int32_t result
    void* j
    result, j = sub_5a881a(ebx_10[1] * *ebx_10 * eax_7 + 1)
    
    if (result == 0)
    label_598a24:
        sub_5987f0()
        data_273ac1c = "outofmem"
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    int32_t i = 0
    int32_t i_1 = 0
    
    if (ebx_10[1] u> 0)
        int32_t var_b8
        int32_t esi_3 = var_b8
        
        do
            int32_t eax_23 = var_90
            void* ebx_7 = *ebx_10 * i * eax_23 + result
            int32_t var_94_1 = 0
            
            if (eax_23 s> 0)
                void* var_8c_2 = &arg4[0xd6f]
                void var_70
                void* esi_4 = &var_70
                int32_t eax_35
                
                do
                    int32_t edx_7
                    edx_7.b = *esi_4 s>= *(esi_4 - 8) s>> 1
                    int32_t eax_27
                    int32_t ecx_9
                    
                    if (edx_7 == 0)
                        ecx_9 = *(esi_4 - 0x10)
                        eax_27 = *(esi_4 - 0x14)
                    else
                        ecx_9 = *(esi_4 - 0x14)
                        eax_27 = *(esi_4 - 0x10)
                    
                    int32_t eax_30
                    eax_30, j = (*(esi_4 - 0x18))(*(var_8c_2 + 0x14), eax_27, ecx_9, *(esi_4 - 4), 
                        *(esi_4 - 0xc))
                    (&var_b8)[var_94_1] = eax_30
                    int32_t eax_32 = *esi_4 + 1
                    *esi_4 = eax_32
                    
                    if (eax_32 s>= *(esi_4 - 8))
                        *(esi_4 + 4) += 1
                        int32_t ecx_14 = *(esi_4 + 4)
                        int32_t eax_33 = *(esi_4 - 0x10)
                        *esi_4 = 0
                        *(esi_4 - 0x14) = eax_33
                        
                        if (ecx_14 s< *var_8c_2)
                            *(esi_4 - 0x10) = *(var_8c_2 + 4) + eax_33
                    
                    var_8c_2 += 0x38
                    eax_35 = var_94_1 + 1
                    esi_4 += 0x20
                    var_94_1 = eax_35
                while (eax_35 s< var_90)
                esi_3 = var_b8
                eax_23 = var_90
            
            if (eax_23 s>= 3)
                int32_t* ecx_15 = *arg4
                int32_t var_b4
                char* var_b0
                
                if (ecx_15[2] != 3)
                    j = nullptr
                    
                    if (*ecx_15 u> 0)
                        void* eax_38 = ebx_7 + 1
                        
                        do
                            ecx_15.b = *(j + esi_3)
                            *(eax_38 + 1) = ecx_15.b
                            *eax_38 = ecx_15.b
                            *(eax_38 - 1) = ecx_15.b
                            *(eax_38 + 2) = 0xff
                            eax_38 += var_90
                            j += 1
                        while (j u< **arg4)
                else
                    sub_598700(ebx_7, *ecx_15, var_b4, esi_3, var_b0, eax_23)
            else if (eax_23 != 1)
                char* j_1 = nullptr
                
                if (**arg4 u> 0)
                    void* ebx_9 = ebx_7
                    
                    do
                        j.b = j_1[esi_3]
                        *ebx_9 = j.b
                        *(ebx_9 + 1) = 0xff
                        j_1 = &j_1[1]
                        ebx_9 += 2
                    while (j_1 u< **arg4)
            else
                int32_t j_2 = 0
                
                if (**arg4 u> 0)
                    char* ecx_18 = esi_3 - ebx_7
                    
                    do
                        j.b = *(ecx_18 + ebx_7)
                        *ebx_7 = j.b
                        j_2 += 1
                        ebx_7 += 1
                    while (j_2 u< **arg4)
            
            ebx_10 = *arg4
            i = i_1 + 1
            i_1 = i
        while (i u< ebx_10[1])
    
    sub_5987f0()
    *arg5 = **arg4
    *arg3 = *(*arg4 + 4)
    
    if (arg2 != 0)
        *arg2 = *(*arg4 + 8)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
