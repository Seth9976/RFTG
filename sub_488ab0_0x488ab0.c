// 函数名称: sub_488ab0
// 虚拟地址: 0x488ab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_488ab0(int32_t arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t entry_ebx
    
    if (entry_ebx s> 0)
        int32_t edx_1
        
        if (0 s>= entry_ebx)
            edx_1 = 0
            goto label_488b08
        
        do
            int32_t esi_1
            
            if (*(data_27e7a40 + 0x2c4960) == 2 || data_30d7278 != 0)
                esi_1 = 0
                int32_t i = sub_4194b0()
                int32_t* ecx_2 = data_27e7a4c + 0x10
                
                while (*ecx_2 != i)
                    esi_1 += 1
                    ecx_2 = &ecx_2[0x1c]
                    
                    if (esi_1 s>= 4)
                        goto label_488afd
            else
            label_488afd:
                esi_1 = 0
            
            edx_1 = mods.dp.d(sx.q(result - esi_1 + entry_ebx), entry_ebx)
        label_488b08:
            
            if (edx_1 == arg1)
                return result
            
            result += 1
        while (result s< entry_ebx)
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RftGVR.cpp", 0x1950, "ModelSeatToPlayerIndex")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
