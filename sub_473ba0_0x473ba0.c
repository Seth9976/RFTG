// 函数名称: sub_473ba0
// 虚拟地址: 0x473ba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_473ba0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d9d0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_64 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_27e7a5c
    int32_t* eax_4 = sub_4f43d0()
    int32_t* var_3c = eax_4
    int32_t var_38 = 0
    int32_t var_34 = 3
    int32_t var_8_1 = 0
    int32_t eax_5 = *arg1
    int32_t result_1
    
    if (eax_5 != 0)
        int32_t* var_68_2
        
        if (eax_5 != 4)
            result_1 = eax_5 - 1
            var_68_2 = &result_1
        else
            result_1 = 1
            sub_474160(&var_3c, &result_1)
            result_1 = 2
            var_68_2 = &result_1
        
        sub_474160(&var_3c, var_68_2)
    else
        if (eax_4 != 0)
            *eax_4 = 0
        
        if (eax_4 != 0xfffffffc)
            eax_4[1] = 1
        
        if (eax_4 != 0xfffffff8)
            eax_4[2] = 2
        
        var_38 = 3
    
    int32_t* eax_11 = sub_4f43d0()
    int32_t* var_30 = eax_11
    int32_t var_2c = 0
    int32_t var_28 = 4
    var_8_1.b = 1
    int32_t eax_12 = arg1[1]
    
    if (eax_12 != 0)
        int32_t* var_68_5
        
        if (eax_12 == 1)
            result_1 = 0
            sub_4741c0(&var_30, &result_1)
            result_1 = 1
            sub_4741c0(&var_30, &result_1)
            result_1 = 2
            var_68_5 = &result_1
        else if (eax_12 == 2)
            result_1 = 1
            sub_4741c0(&var_30, &result_1)
            result_1 = 2
            var_68_5 = &result_1
        else if (eax_12 != 3)
            result_1 = eax_12 - 1
            var_68_5 = &result_1
        else
            result_1 = 2
            var_68_5 = &result_1
        
        sub_4741c0(&var_30, var_68_5)
    else
        if (eax_11 != 0)
            *eax_11 = 0
        
        if (eax_11 != 0xfffffffc)
            eax_11[1] = 1
        
        if (eax_11 != 0xfffffff8)
            eax_11[2] = 2
        
        if (eax_11 != 0xfffffff4)
            eax_11[3] = 3
        
        var_2c = 4
    
    int32_t* esi_1 = sub_4f43d0()
    int32_t var_40 = 4
    var_8_1.b = 2
    int32_t eax_22 = arg1[2]
    int32_t var_44
    
    if (eax_22 != 0)
        if (esi_1 != 0)
            *esi_1 = eax_22 - 1
        
        var_44 = 1
    else
        if (esi_1 != 0)
            *esi_1 = eax_22
        
        if (esi_1 != 0xfffffffc)
            esi_1[1] = 1
        
        if (esi_1 != 0xfffffff8)
            esi_1[2] = 2
        
        if (esi_1 != 0xfffffff4)
            esi_1[3] = 3
        
        var_44 = 4
    
    int32_t* ebx_4 = sub_4f43d0()
    int32_t var_4c = 4
    var_8_1.b = 3
    int32_t var_50
    
    if (arg1[3] != 0)
        if (ebx_4 != 0)
            *ebx_4 = 1
        
        var_50 = 1
    else
        if (ebx_4 != 0)
            *ebx_4 = 1
        
        if (ebx_4 != 0xfffffffc)
            ebx_4[1] = 2
        
        var_50 = 2
    
    arg1 = 0xfffffc18
    int32_t edx_2
    edx_2.b = arg2 == 0x66
    int32_t result = 0
    int32_t var_14 = 0
    
    if (var_38 s> 0)
        while (true)
            int32_t esi_2 = 0
            
            if (var_2c s> 0)
                while (true)
                    int32_t ebx_5 = 0
                    
                    if (var_44 s> 0)
                        while (true)
                            int32_t edi_1 = 0
                            
                            if (var_50 s> 0)
                                while (true)
                                    if (edi_1 s< 0 || edi_1 s>= var_50)
                                        sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                                            "c:\ax2010\engine\xArray.h", 0xb5, 
                                            "XArray<enum StatEnding>::operator []")
                                        
                                        if (IsDebuggerPresent() != 1)
                                            sub_4c5a30()
                                            noreturn
                                        
                                        breakpoint
                                    
                                    if (ebx_5 s< 0 || ebx_5 s>= var_44)
                                        sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                                            "c:\ax2010\engine\xArray.h", 0xb5, 
                                            "XArray<enum StatExpansion>::operator []")
                                        
                                        if (IsDebuggerPresent() != 1)
                                            sub_4c5a30()
                                            noreturn
                                        
                                        breakpoint
                                    
                                    if (esi_2 s< 0 || esi_2 s>= var_2c)
                                        sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                                            "c:\ax2010\engine\xArray.h", 0xb5, 
                                            "XArray<enum StatDifficulty>::operator []")
                                        
                                        if (IsDebuggerPresent() != 1)
                                            sub_4c5a30()
                                            noreturn
                                        
                                        breakpoint
                                    
                                    if (var_14 s< 0 || var_14 s>= var_38)
                                        sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                                            "c:\ax2010\engine\xArray.h", 0xb5, 
                                            "XArray<enum StatPlayers>::operator []")
                                        
                                        if (IsDebuggerPresent() != 1)
                                            sub_4c5a30()
                                            noreturn
                                        
                                        breakpoint
                                    
                                    int32_t* var_68_7 = &result_1
                                    int32_t var_6c_1 = 1
                                    int32_t* edx_5 = var_3c
                                    int32_t ecx_4 = edx_5[var_14]
                                    int32_t* eax_34 = sub_473080(eax_3, edx_5, ecx_4, ecx_4, 
                                        var_30[esi_2], esi_1[ebx_5], ebx_4[edi_1], arg2)
                                    
                                    if (eax_34 != 0xfffffc18)
                                        if (arg1 == 0xfffffc18)
                                            result = result_1
                                            arg1 = eax_34
                                        else if (edx_2 != 0)
                                            if (edx_2 != 1)
                                                sub_4c5870("Halt", &data_83f3d3, 
                                                    "..\code\RftGStats.cpp", 0xb5, "ApplyFoldOp")
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_4c5a30()
                                                noreturn
                                            
                                            if (arg1 s>= eax_34)
                                                arg1 = eax_34
                                                result = result_1
                                        else if (arg1 s<= eax_34)
                                            arg1 = eax_34
                                            result = result_1
                                    
                                    edi_1 += 1
                                    
                                    if (edi_1 s>= var_50)
                                        break
                                    
                                    continue
                            
                            ebx_5 += 1
                            
                            if (ebx_5 s>= var_44)
                                break
                    
                    esi_2 += 1
                    
                    if (esi_2 s>= var_2c)
                        break
            
            int32_t eax_37 = var_14 + 1
            var_14 = eax_37
            
            if (eax_37 s>= var_38)
                break
    
    var_8_1.b = 2
    void* edi_2 = data_26a44e4
    
    if (edi_2 != 0 && ebx_4 != 0)
        int32_t edx_8 = 0
        void* edi_3
        
        while (true)
            if (1 << (edx_8.b + 4) s>= 0x10)
                edi_3 = edi_2 + edx_8 * 0x14
                break
            
            edx_8 += 1
            
            if (edx_8 s>= 7)
                edi_3 = edi_2 + 0x8c
                break
        
        sub_4f4430(ebx_4, edi_3, 0x10)
        edi_2 = data_26a44e4
    
    var_8_1.b = 1
    
    if (edi_2 != 0 && esi_1 != 0)
        int32_t edx_9 = 0
        int32_t* edi_5
        
        while (true)
            if (1 << (edx_9.b + 4) s>= 0x10)
                edi_5 = edi_2 + edx_9 * 0x14
                break
            
            edx_9 += 1
            
            if (edx_9 s>= 7)
                edi_5 = edi_2 + 0x8c
                break
        
        sub_4f4430(esi_1, edi_5, 0x10)
        edi_2 = data_26a44e4
    
    var_8_1.b = 0
    
    if (edi_2 != 0 && var_30 != 0)
        int32_t ebx_8 = var_28 * 4
        int32_t edx_10 = 0
        int32_t* edi_6
        
        while (true)
            if (ebx_8 s<= 1 << (edx_10.b + 4))
                edi_6 = edi_2 + edx_10 * 0x14
                break
            
            edx_10 += 1
            
            if (edx_10 s>= 7)
                edi_6 = edi_2 + 0x8c
                break
        
        sub_4f4430(var_30, edi_6, ebx_8)
        edi_2 = data_26a44e4
    
    int32_t var_8_2 = 0xffffffff
    
    if (edi_2 != 0 && var_3c != 0)
        int32_t edx_13 = var_34 * 4
        int32_t eax_44 = 0
        void* edi_7
        
        while (true)
            if (edx_13 s<= 1 << (eax_44.b + 4))
                edi_7 = edi_2 + eax_44 * 0x14
                break
            
            eax_44 += 1
            
            if (eax_44 s>= 7)
                edi_7 = edi_2 + 0x8c
                break
        
        sub_4f4430(var_3c, edi_7, edx_13)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
