// 函数名称: sub_531e10
// 虚拟地址: 0x531e10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_531e10(int32_t* arg1, int32_t* arg2 @ esi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* entry_ebx
    int32_t eax_2 = *entry_ebx
    
    if (eax_2 != *arg1)
        sub_4c5870("place1.idWorld == place2.idWorld", &data_83f3d3, "c:\ax2010\engine\WorldPlace.h", 
            0x18, "WorldPlaceCompose")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    *arg2 = eax_2
    float var_2c
    sub_405970(&var_2c, &entry_ebx[5], &arg1[1])
    var_2c = fconvert.s(fconvert.t(arg1[5]) + fconvert.t(var_2c))
    float var_28
    float var_28_1 = fconvert.s(fconvert.t(arg1[6]) + fconvert.t(var_28))
    long double x87_r7_4 = fconvert.t(arg1[7])
    arg2[5] = var_2c
    arg2[6] = var_28_1
    float var_24
    float var_24_1 = fconvert.s(x87_r7_4 + fconvert.t(var_24))
    arg2[7] = var_24_1
    sub_405ee0(&var_2c, &entry_ebx[1], &arg1[1])
    arg2[1] = var_2c
    arg2[2] = var_28_1
    arg2[3] = var_24_1
    int32_t result
    arg2[4] = result
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
