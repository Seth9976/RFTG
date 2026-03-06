// 函数名称: sub_442f20
// 虚拟地址: 0x442f20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_442f20(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6967b2
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void* var_54
    int32_t eax_2 = __security_cookie ^ &var_54
    int32_t __saved_edi
    int32_t var_64 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_5 = data_27e7a40
    void* edi = *(eax_5 + 0x548)
    void* eax_6
    void* edx
    eax_6, edx = sub_46b2b0(*(eax_5 + 0x74))
    void* ebx = data_27e7a40
    bool cond:0 = *(ebx + 0x2c4960) != 2
    var_54 = eax_6
    void* result
    
    if (cond:0)
    label_442fb4:
        result = *(ebx + 0x548)
        
        if (result == 0)
            sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, 
                "GetGame")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*(*(result + 0x45844) + 0x1ec3) != 0 && *(edi + 0x210) != 3)
            int32_t esi_2 = *(result + 0xbfa8)
            result = sub_41d070()
            
            if (esi_2 == result && *(edi + 0x2c024) == 0)
                void* eax_11 = var_54
                *(eax_11 + 0x1a08) = 0
                *(eax_11 + 0x1f30) = 0
                *(eax_11 + 0x1c) = 0x20
                void* eax_12 = data_27e7a40
                void* esi_3 = *(eax_12 + 0x548)
                void var_4c
                
                if (*(esi_3 + 0x2c078) == 1 && *(esi_3 + 0x210) == 0)
                    sub_4d6480(data_307bef0)
                    edx = sub_4d66f0(&var_4c)
                    eax_12 = data_27e7a40
                
                *(esi_3 + 0x210) = 3
                *(esi_3 + 0x2c078) = 0
                *(esi_3 + 0x214) = 0
                
                if (*(eax_12 + 0x2c4960) != 4)
                    int32_t esi_5 = *(edi + 8)
                    
                    if (*(data_27e7fd0 + 0x27) == 0)
                        void* eax_38 = *(eax_12 + 0x548)
                        *(eax_38 + 0x2c079) = 1
                        sub_440510(eax_38, arg1, edi + 0x438f4, arg1, esi_5)
                        sub_4fa8a0(esi_5, 0, fconvert.s(float.t(0)))
                        sub_4d6480(data_307bf28)
                        sub_4d66f0(&var_4c)
                    else
                        data_30d6f38 = data_307c794
                        data_30d6f41 = 1
                else
                    int32_t eax_13 = *(edi + 8)
                    sub_440510(eax_13, edx, edi + 0x438f4, arg1, eax_13)
                    int32_t* ecx_6 = sub_5abfc0(edi + 0x438f4, 0x55, 0x48)
                    
                    if ((data_316621c & 1) == 0)
                        data_316621c.d |= 1
                        int32_t var_c_1 = 0
                        ecx_6 = data_307c798
                        data_3166218 = sub_4f5220(ecx_6, "animCardPoints")
                        int32_t var_c_2 = 0xffffffff
                    
                    if ((data_316621c & 2) == 0)
                        data_316621c.d |= 2
                        int32_t var_c_3 = 1
                        data_3166214 = sub_4f5220(data_307c798, "animChits")
                        int32_t var_c_4 = 0xffffffff
                    
                    if ((data_316621c & 4) == 0)
                        data_316621c.d |= 4
                        int32_t var_c_5 = 2
                        data_3166210 = sub_4f5220(data_307c798, "animGoals")
                        int32_t var_c_6 = 0xffffffff
                    
                    if ((data_316621c & 8) == 0)
                        data_316621c.d |= 8
                        int32_t var_c_7 = 3
                        ecx_6 = data_307c798
                        data_316620c = sub_4f5220(ecx_6, "animPrestige")
                        int32_t var_c_8 = 0xffffffff
                    
                    if ((data_316621c & 0x10) == 0)
                        data_316621c.d |= 0x10
                        int32_t var_c_9 = 4
                        data_3166208 = sub_4f5220(data_307c798, "animCards")
                        int32_t var_c_10 = 0xffffffff
                    
                    if ((data_316621c & 0x20) == 0)
                        data_316621c.d |= 0x20
                        int32_t var_c_11 = 5
                        data_3166204 = sub_4f5220(data_307c798, "animWinner")
                        int32_t var_c_12 = 0xffffffff
                    
                    if ((data_316621c & 0x40) == 0)
                        data_316621c.d |= 0x40
                        int32_t var_c_13 = 6
                        ecx_6 = data_307c798
                        data_3166200 = sub_4f5220(ecx_6, "TxtPointsTableau")
                        int32_t var_c_14 = 0xffffffff
                    
                    if ((data_316621c & 0x80) == 0)
                        data_316621c.d |= 0x80
                        int32_t var_c_15 = 7
                        data_31661fc = sub_4f5220(data_307c798, "TxtPointsChits")
                        int32_t var_c_16 = 0xffffffff
                    
                    if ((data_316621c.d & 0x100) == 0)
                        data_316621c.d |= 0x100
                        int32_t var_c_17 = 8
                        data_31661f8 = sub_4f5220(data_307c798, "TxtPointsGoals")
                        int32_t var_c_18 = 0xffffffff
                    
                    if ((data_316621c.d & 0x200) == 0)
                        data_316621c.d |= 0x200
                        int32_t var_c_19 = 9
                        ecx_6 = data_307c798
                        data_31661f4 = sub_4f5220(ecx_6, "TxtPointsPrestige")
                        int32_t var_c_20 = 0xffffffff
                    
                    if ((data_316621c.d & 0x400) == 0)
                        data_316621c.d |= 0x400
                        int32_t var_c_21 = 0xa
                        data_31661f0 = sub_4f5220(data_307c798, "txtCardCount")
                        int32_t var_c_22 = 0xffffffff
                    
                    int32_t* var_68_3 = ecx_6
                    sub_441700(arg1, data_3166204, fconvert.s(float.t(1)))
                    
                    if (sub_49c8d0(sub_418a10()) != 0)
                        sub_4419b0(arg1, data_31661f8, sub_440370, 0x3e8)
                        sub_441050(arg1, data_3166210, fconvert.s(float.t(1)))
                    
                    if (*(sub_418a10() + 0x45a) == 3)
                        sub_4419b0(arg1, data_31661f4, sub_440380, 0x3e8)
                        unimplemented  {fld1 }
                        float var_68_6 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
                        unimplemented  {fstp dword [esp+0xc], st0}
                        sub_441050(arg1, data_316620c, var_68_6)
                        unimplemented  {call 0x441050}
                    
                    if (sub_440490(sub_418a10()) != 0)
                        sub_4419b0(arg1, data_31661f0, sub_440390, 0x3e8)
                        unimplemented  {fld1 }
                        float var_68_7 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
                        unimplemented  {fstp dword [esp+0xc], st0}
                        sub_4412f0(arg1, data_3166208, var_68_7)
                        unimplemented  {call 0x4412f0}
                    
                    sub_4419b0(arg1, data_3166200, sub_440330, 0x3e8)
                    unimplemented  {fld1 }
                    float var_68_8 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
                    unimplemented  {fstp dword [esp+0xc], st0}
                    sub_441050(arg1, data_3166218, var_68_8)
                    unimplemented  {call 0x441050}
                    sub_4419b0(arg1, data_31661fc, sub_440360, 0x3e8)
                    unimplemented  {fld1 }
                    float var_68_9 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
                    unimplemented  {fstp dword [esp+0xc], st0}
                    sub_441050(arg1, data_3166214, var_68_9)
                    unimplemented  {call 0x441050}
                
                if (sub_419400(&var_54) != 0 && *var_54 == 0x47)
                    sub_419340()
                
                result = data_27e7a40
                
                if (*(result + 0x2c4960) == 1)
                    result = sub_408470(*(data_27e7a54 + 0x20c), 0x27c0610)
    else
        int32_t eax_8 = *(ebx + 0x2c495c) * 0x1f8
        int32_t esi_1 = *(eax_8 + ebx + 0xc18)
        edx = eax_8 + ebx + 0xad8
        int32_t eax_9 = 0
        
        if (esi_1 s<= 0)
            goto label_442fb4
        
        edx += 0x30
        
        while (true)
            int32_t ecx_1 = *edx
            
            if (ecx_1 == 2)
                break
            
            if (ecx_1 == 6)
                break
            
            eax_9 += 1
            edx += 0x50
            
            if (eax_9 s>= esi_1)
                goto label_442fb4
        
        if (*(ebx + 0xa10) != 0)
            goto label_442fb4
        
        sub_416690(*(ebx + 0x2c495c), 0)
        result = data_27e7fd0
        
        if (*(result + 0x27) != 0)
            data_30d6f3c = data_307c1a4
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_54)
    return result
}
