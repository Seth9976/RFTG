// 函数名称: sub_473290
// 虚拟地址: 0x473290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_473290(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?strtoxq@@YA_KPAUlocaleinfo_struct@@PBDPAPBDHH@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_88 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_27e7a5c
    int32_t* eax_4 = sub_4f43d0()
    int32_t* var_5c = eax_4
    int32_t var_58 = 0
    int32_t var_54 = 3
    int32_t var_8_1 = 0
    int32_t eax_5 = *arg1
    int32_t var_2c
    
    if (eax_5 != 0)
        int32_t* var_8c_2
        
        if (eax_5 != 4)
            var_2c = eax_5 - 1
            var_8c_2 = &var_2c
        else
            var_2c = 1
            sub_474160(&var_5c, &var_2c)
            var_2c = 2
            var_8c_2 = &var_2c
        
        sub_474160(&var_5c, var_8c_2)
    else
        if (eax_4 != 0)
            *eax_4 = 0
        
        if (eax_4 != 0xfffffffc)
            eax_4[1] = 1
        
        if (eax_4 != 0xfffffff8)
            eax_4[2] = 2
        
        var_58 = 3
    
    int32_t* eax_11 = sub_4f43d0()
    int32_t* var_50 = eax_11
    int32_t var_4c = 0
    int32_t var_48 = 4
    var_8_1.b = 1
    int32_t eax_12 = arg1[1]
    
    if (eax_12 != 0)
        int32_t* var_8c_5
        
        if (eax_12 == 1)
            var_2c = 0
            sub_4741c0(&var_50, &var_2c)
            var_2c = 1
            sub_4741c0(&var_50, &var_2c)
            var_2c = 2
            var_8c_5 = &var_2c
        else if (eax_12 == 2)
            var_2c = 1
            sub_4741c0(&var_50, &var_2c)
            var_2c = 2
            var_8c_5 = &var_2c
        else if (eax_12 != 3)
            var_2c = eax_12 - 1
            var_8c_5 = &var_2c
        else
            var_2c = 2
            var_8c_5 = &var_2c
        
        sub_4741c0(&var_50, var_8c_5)
    else
        if (eax_11 != 0)
            *eax_11 = 0
        
        if (eax_11 != 0xfffffffc)
            eax_11[1] = 1
        
        if (eax_11 != 0xfffffff8)
            eax_11[2] = 2
        
        if (eax_11 != 0xfffffff4)
            eax_11[3] = 3
        
        var_4c = 4
    
    int32_t* edi = sub_4f43d0()
    int32_t* var_68 = edi
    int32_t var_60 = 4
    var_8_1.b = 2
    int32_t eax_22 = arg1[2]
    int32_t var_64
    
    if (eax_22 != 0)
        if (edi != 0)
            *edi = eax_22 - 1
        
        var_64 = 1
    else
        if (edi != 0)
            *edi = eax_22
        
        if (edi != 0xfffffffc)
            edi[1] = 1
        
        if (edi != 0xfffffff8)
            edi[2] = 2
        
        if (edi != 0xfffffff4)
            edi[3] = 3
        
        var_64 = 4
    
    int32_t* esi_1 = sub_4f43d0()
    int32_t* var_74 = esi_1
    int32_t var_6c = 4
    int32_t ecx = 0
    var_8_1.b = 3
    int32_t var_70
    
    if (arg1[3] != 0)
        if (esi_1 != 0)
            *esi_1 = 1
        
        var_70 = 1
    else
        if (esi_1 != 0)
            *esi_1 = 1
        
        if (esi_1 != 0xfffffffc)
            esi_1[1] = 2
        
        if (esi_1 != 0xfffffff8)
            esi_1[2] = 0
        
        var_70 = 3
    
    int32_t eax_31 = 0
    int32_t result = 0xfffffc18
    int32_t edx_3
    edx_3.b = arg2 == 0x66
    int32_t var_28 = 0
    var_2c = 0
    arg1 = nullptr
    
    if (var_58 s> 0)
        void* eax_64
        
        do
            int32_t esi_2 = 0
            int32_t var_24_1 = 0
            
            if (var_4c s> 0)
                do
                    int32_t* var_20_1 = nullptr
                    
                    if (var_64 s> 0)
                        edi = nullptr
                        
                        do
                            int32_t ebx_4 = 0
                            
                            if (var_70 s> 0)
                                do
                                    if (arg3 == 3 || arg3 == 4)
                                        if (ebx_4 s< 0 || ebx_4 s>= var_70)
                                            sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                                                "c:\ax2010\engine\xArray.h", 0xb5, 
                                                "XArray<enum StatEnding>::operator []")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        if (edi s< 0 || edi s>= var_64)
                                            sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                                                "c:\ax2010\engine\xArray.h", 0xb5, 
                                                "XArray<enum StatExpansion>::operator []")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        if (esi_2 s< 0 || esi_2 s>= var_4c)
                                            sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                                                "c:\ax2010\engine\xArray.h", 0xb5, 
                                                "XArray<enum StatDifficulty>::operator []")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        if (arg1 s< 0 || arg1 s>= var_58)
                                            sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                                                "c:\ax2010\engine\xArray.h", 0xb5, 
                                                "XArray<enum StatPlayers>::operator []")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        int32_t var_8c_8 = 0
                                        int32_t var_90_2 = 0
                                        int32_t edx_12 = var_5c[arg1]
                                        int32_t eax_44 = sub_473080(eax_3, edx_12, arg1, edx_12, 
                                            var_50[esi_2], var_68[edi], var_74[ebx_4], arg2)
                                        
                                        if (eax_44 != 0xfffffc18)
                                            int32_t edx_16 = *(eax_3 + 0xf4240)
                                            int32_t esi_3 = 0
                                            int32_t eax_62
                                            
                                            if (edx_16 s<= 0)
                                            label_473724:
                                                eax_62 = 0xfffffc18
                                            else
                                                void* var_18_1 = eax_3
                                                
                                                while (true)
                                                    int32_t ecx_15 = *var_18_1
                                                    
                                                    if (ecx_15 << 0x1c s>> 0x1c == var_5c[arg1]
                                                            && ecx_15 << 0x18 s>> 0x1c
                                                            == var_50[var_24_1]
                                                            && ecx_15 << 0x14 s>> 0x1c == var_68[edi]
                                                            && ecx_15 << 0x10 s>> 0x1c == var_74[ebx_4]
                                                            && ecx_15 << 4 s>> 0x14 == arg2)
                                                        eax_62 = *(var_18_1 + 0xc)
                                                        edi = var_20_1
                                                        break
                                                    
                                                    var_18_1 += 0x14
                                                    esi_3 += 1
                                                    
                                                    if (esi_3 s>= edx_16)
                                                        edi = var_20_1
                                                        goto label_473724
                                            
                                            var_28 += eax_44
                                            var_2c += eax_62
                                            esi_2 = var_24_1
                                    else
                                        if (ebx_4 s< 0 || ebx_4 s>= var_70)
                                            sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                                                "c:\ax2010\engine\xArray.h", 0xb5, 
                                                "XArray<enum StatEnding>::operator []")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        if (edi s< 0 || edi s>= var_64)
                                            sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                                                "c:\ax2010\engine\xArray.h", 0xb5, 
                                                "XArray<enum StatExpansion>::operator []")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        if (esi_2 s< 0 || esi_2 s>= var_4c)
                                            sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                                                "c:\ax2010\engine\xArray.h", 0xb5, 
                                                "XArray<enum StatDifficulty>::operator []")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        if (arg1 s< 0 || arg1 s>= var_58)
                                            sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                                                "c:\ax2010\engine\xArray.h", 0xb5, 
                                                "XArray<enum StatPlayers>::operator []")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        int32_t var_8c_7 = 0
                                        int32_t var_90_1 = arg3
                                        int32_t* edx_6 = var_5c
                                        int32_t ecx_4 = edx_6[arg1]
                                        int32_t result_1 = sub_473080(eax_3, edx_6, ecx_4, ecx_4, 
                                            var_50[esi_2], var_68[edi], var_74[ebx_4], arg2)
                                        
                                        if (result_1 != 0xfffffc18)
                                            if (result == 0xfffffc18)
                                                result = result_1
                                            else if (arg3 != 1)
                                                result += result_1
                                            else if (edx_3 != 0)
                                                if (edx_3 != 1)
                                                    sub_4c5870("Halt", &data_83f3d3, 
                                                        "..\code\RftGStats.cpp", 0xb5, "ApplyFoldOp")
                                                    
                                                    if (IsDebuggerPresent() == 1)
                                                        breakpoint
                                                    
                                                    sub_4c5a30()
                                                    noreturn
                                                
                                                if (result s>= result_1)
                                                    result = result_1
                                            else if (result s<= result_1)
                                                result = result_1
                                    
                                    ebx_4 += 1
                                while (ebx_4 s< var_70)
                            
                            edi += 1
                            var_20_1 = edi
                        while (edi s< var_64)
                    
                    esi_2 += 1
                    var_24_1 = esi_2
                while (esi_2 s< var_4c)
            
            eax_64 = arg1 + 1
            arg1 = eax_64
        while (eax_64 s< var_58)
        edi = var_68
        ecx = var_28
        eax_31 = var_2c
        esi_1 = var_74
    
    var_8_1.b = 2
    
    if (arg3 != 3)
        if (arg3 != 4)
            if (data_26a44e4 != 0 && esi_1 != 0)
                sub_4f4430(var_74, sub_4f4380(0x10), 0x10)
                edi = var_68
            
            var_8_1.b = 1
            
            if (data_26a44e4 != 0 && edi != 0)
                sub_4f4430(var_68, sub_4f4380(0x10), 0x10)
            
            var_8_1.b = 0
            
            if (data_26a44e4 != 0 && var_50 != 0)
                int32_t esi_18 = var_48 * 4
                int32_t* eax_99 = sub_4f4380(esi_18)
                sub_4f4430(var_50, eax_99, esi_18)
            
            int32_t var_8_4 = 0xffffffff
            
            if (data_26a44e4 != 0 && var_5c != 0)
                int32_t esi_21 = var_54 * 4
                int32_t* eax_101 = sub_4f4380(esi_21)
                sub_4f4430(var_5c, eax_101, esi_21)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        if (ecx != 0)
            eax_31 *= 0xa
        label_473a16:
            
            if (data_26a44e4 != 0 && esi_1 != 0)
                sub_4f4430(var_74, sub_4f4380(0x10), 0x10)
                edi = var_68
            
            var_8_1.b = 1
            
            if (data_26a44e4 != 0 && edi != 0)
                sub_4f4430(var_68, sub_4f4380(0x10), 0x10)
            
            var_8_1.b = 0
            
            if (data_26a44e4 != 0 && var_50 != 0)
                int32_t esi_12 = var_48 * 4
                int32_t* eax_89 = sub_4f4380(esi_12)
                sub_4f4430(var_50, eax_89, esi_12)
            
            int32_t var_8_3 = 0xffffffff
            
            if (data_26a44e4 != 0 && var_5c != 0)
                int32_t esi_15 = var_54 * 4
                int32_t* eax_91 = sub_4f4380(esi_15)
                sub_4f4430(var_5c, eax_91, esi_15)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return divs.dp.d(sx.q(eax_31), ecx)
    else if (ecx != 0)
        goto label_473a16
    
    if (data_26a44e4 != 0 && esi_1 != 0)
        sub_4f4430(var_74, sub_4f4380(0x10), 0x10)
        edi = var_68
    
    var_8_1.b = 1
    
    if (data_26a44e4 != 0 && edi != 0)
        sub_4f4430(var_68, sub_4f4380(0x10), 0x10)
    
    var_8_1.b = 0
    
    if (data_26a44e4 != 0 && var_50 != 0)
        int32_t esi_6 = var_48 * 4
        int32_t* eax_69 = sub_4f4380(esi_6)
        sub_4f4430(var_50, eax_69, esi_6)
    
    int32_t var_8_2 = 0xffffffff
    
    if (data_26a44e4 != 0 && var_5c != 0)
        int32_t esi_9 = var_54 * 4
        int32_t* eax_71 = sub_4f4380(esi_9)
        sub_4f4430(var_5c, eax_71, esi_9)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0xfffffc18
}
