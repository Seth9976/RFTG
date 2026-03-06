// 函数名称: sub_4d8b30
// 虚拟地址: 0x4d8b30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4d8b30()
{
    // 第一条实际指令: void var_36c
    void var_36c
    int32_t eax_1 = __security_cookie ^ &var_36c
    void* result = data_27e7fe0
    int32_t edx = *(result + 0x18)
    
    if (edx != 0)
        if (*(result + 0x3c) == 0)
            sub_4c5870("gpSpriteAppData->pLockedVerts", &data_83f3d3, "Sprite.cpp", 0xd9, 
                "SpriteDrawBuffers")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edi_1 = *(result + (*(result + 0x10) << 2))
        (*(*data_3078804 + 0x68))(edi_1, edx * 0x60)
        void* esi_1 = data_27e7fe0
        bool cond:0_1 = *(esi_1 + 0x18) s<= 0x400
        *(esi_1 + 0x3c) = 0
        
        if (not(cond:0_1))
            sub_4c5870("gpSpriteAppData->numBufferSprites <= MAX_SPRITE_PER_DRAW", &data_83f3d3, 
                "Sprite.cpp", 0xe2, "SpriteDrawBuffers")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int128_t var_368[0x8]
        int32_t edx_3 = sub_5abfc0(&var_368, 0, 0x358)
        int32_t ebx_1 = *(esi_1 + 0x50)
        void* eax_7
        
        if (ebx_1 == 0)
            eax_7 = sub_4d8860()
            esi_1 = data_27e7fe0
        else
            int32_t* eax_6 = *(esi_1 + 0x40)
            
            if (eax_6 == 0)
            label_4d8c27:
                eax_7, edx_3 = sub_4d8760()
                esi_1 = data_27e7fe0
            else
                while (true)
                    int32_t* ecx_3 = *eax_6
                    eax_6 = eax_6[1]
                    
                    if (*ecx_3 == ebx_1)
                        eax_7 = &ecx_3[1]
                        break
                    
                    if (eax_6 == 0)
                        goto label_4d8c27
        
        void* var_18_1 = eax_7
        int32_t esi_2 = *(esi_1 + 0x4c)
        
        if (esi_2 != 0)
            sub_534b50(eax_7, edx_3, eax_7, 0x53, esi_2)
        
        void var_2e8
        (*(*data_3078804 + 0x7c))(&var_2e8)
        (*(*data_3078804 + 0x40))(&var_368)
        void* edx_6 = data_27e7fe0
        int32_t eax_10 = *(edx_6 + 0x18)
        (*(*data_3078804 + 0x3c))(4, edi_1, *(edx_6 + 0x14), 1, eax_10 * 2, eax_10 << 2, 0, 0)
        void* eax_13 = data_27e7fe0
        int32_t ecx_10 = (*(eax_13 + 0x10) + 1) & 0x80000003
        *(eax_13 + 0x18) = 0
        
        if (ecx_10 s< 0)
            ecx_10 = ((ecx_10 - 1) | 0xfffffffc) + 1
        
        *(eax_13 + 0x10) = ecx_10
        result = data_27e7fe4
        *(result + 0x28) += 1
    
    sub_5a6aba(eax_1 ^ &var_36c)
    return result
}
