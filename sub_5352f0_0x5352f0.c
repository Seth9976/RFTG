// 函数名称: sub_5352f0
// 虚拟地址: 0x5352f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5352f0(int32_t* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    
    switch (*(arg2 + 8) - 4)
        case 0
            int32_t* ecx_4 = *(arg2 + 0x14) + arg3 * 0x24
            *arg1 = *ecx_4
            int32_t ecx_5 = ecx_4[2]
            arg1[1] = ecx_4[1]
            arg1[2] = ecx_5
            return 
        case 1
            ecx = arg3 * 0x2c
            goto label_53530a
        case 2
            ecx = arg3 * 0x30
            goto label_53530a
        case 4
            int32_t* ecx_7 = *(arg2 + 0x14) + arg3 * 0x38
            *arg1 = *ecx_7
            int32_t ecx_8 = ecx_7[2]
            arg1[1] = ecx_7[1]
            arg1[2] = ecx_8
            return 
        case 5
            int32_t* ecx_9 = *(arg2 + 0x14) + arg3 * 0x1c
            *arg1 = *ecx_9
            int32_t ecx_10 = ecx_9[2]
            arg1[1] = ecx_9[1]
            arg1[2] = ecx_10
            return 
        case 0xa
            ecx = arg3 << 5
        label_53530a:
            int32_t* ecx_1 = ecx + *(arg2 + 0x14)
            *arg1 = *ecx_1
            int32_t ecx_2 = ecx_1[2]
            arg1[1] = ecx_1[1]
            arg1[2] = ecx_2
            return 
    
    sub_4c5870("Halt", &data_83f3d3, "StructureImport.cpp", 0x177, "StructureGetVertexPosition")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
