// 函数名称: sub_445ef0
// 虚拟地址: 0x445ef0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_445ef0(int32_t* arg1, void* arg2 @ edi)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t result
    
    if (sub_419400(&var_8).b != 0)
        int32_t* esi_1 = var_8
        result = *esi_1
        
        if (result != 0x47)
            if (result != 0x2c)
            label_445f26:
                
                if (*esi_1 == 0x2a)
                    result = sub_445db0(arg2, 0x5e)
                
                if (*esi_1 == 0x2a && result.b != 0)
                    sub_419340()
                else if (*esi_1 == 0x2b && sub_445db0(arg2, 0x4c).b != 0)
                    sub_419340()
            else
                result = sub_445db0(arg2, 0x64)
                
                if (result.b == 0)
                    goto label_445f26
                
                sub_419340()
    
    result.b = 1
    return result
}
