// 函数名称: sub_5c6730
// 虚拟地址: 0x5c6730
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c6730(int32_t arg1)
{
    // 第一条实际指令: if (data_8b95c4 != 0)
    if (data_8b95c4 != 0)
        sub_5cce50()
        
        if (sub_5cca60() s>= 0)
            sub_5cc060()
            int32_t ebx = arg1
            
            if ((ebx & 0x2000) != 0)
                ebx |= 0x200
            
            if ((ebx & 0x220) != 0)
                ebx |= 0x4000
            
            if ((ebx & 0x4000) == 0)
                goto label_5c67b3
            
            if (sub_5c6660(0x4000) == 0)
                goto label_5c67ae
            
            if (sub_5c79a0() s>= 0)
                sub_5cbf70()
            label_5c67ae:
                sub_5c65b0(0x4000)
            label_5c67b3:
                
                if ((ebx.b & 1) == 0)
                    goto label_5c67dd
                
                uint32_t eax_5 = sub_5c6660(1)
                int32_t eax_6
                
                if (eax_5 != 0)
                    eax_6 = sub_5cbec0()
                
                if (eax_5 == 0 || eax_6 s>= 0)
                    sub_5c65b0(1)
                label_5c67dd:
                    
                    if ((ebx.b & 0x20) == 0)
                        goto label_5c680c
                    
                    uint32_t eax_7 = sub_5c6660(0x20)
                    int32_t eax_8
                    
                    if (eax_7 != 0)
                        eax_8 = sub_5cb980(nullptr)
                    
                    if (eax_7 == 0 || eax_8 s>= 0)
                        sub_5c65b0(0x20)
                    label_5c680c:
                        
                        if ((ebx.b & 0x10) == 0)
                            goto label_5c6837
                        
                        uint32_t eax_9 = sub_5c6660(0x10)
                        int32_t eax_10
                        
                        if (eax_9 != 0)
                            eax_10 = sub_5c8b40(nullptr)
                        
                        if (eax_9 == 0 || eax_10 s>= 0)
                            sub_5c65b0(0x10)
                        label_5c6837:
                            
                            if ((ebx & 0x200) == 0)
                                goto label_5c6866
                            
                            uint32_t eax_11 = sub_5c6660(0x200)
                            int32_t eax_12
                            
                            if (eax_11 != 0)
                                eax_12 = sub_5c6b00()
                            
                            if (eax_11 == 0 || eax_12 s>= 0)
                                sub_5c65b0(0x200)
                            label_5c6866:
                                
                                if ((ebx & 0x2000) != 0)
                                    if (sub_5c6660(0x2000) != 0)
                                        sub_5c8710()
                                    
                                    sub_5c65b0(0x2000)
                                
                                if ((ebx & 0x1000) == 0)
                                    return 0
                                
                                uint32_t eax_14 = sub_5c6660(0x1000)
                                uint32_t eax_15
                                
                                if (eax_14 != 0)
                                    eax_15 = sub_5c79f0()
                                
                                if (eax_14 == 0 || eax_15 s>= 0)
                                    sub_5c65b0(0x1000)
                                    return 0
    else
        sub_5cce60("Application didn't initialize properly, did you include SDL_main.h in the file "
        "containing your main() function?")
    
    return 0xffffffff
}
